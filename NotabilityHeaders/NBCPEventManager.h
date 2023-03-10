/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:13 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/Notability-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@protocol NBCPEventManagerRecordingDelegate;
@class NSMutableDictionary, NSUndoManager;

@interface NBCPEventManager : NSObject <NSCoding> {

	NSMutableDictionary* events;
	unsigned lastUsedID;
	NSMutableDictionary* intervalTrees;
	id<NBCPEventManagerRecordingDelegate> _recordingDelegate;
	NSUndoManager* _undoManager;

}

@property (__weak) id<NBCPEventManagerRecordingDelegate> recordingDelegate; 
@property (__weak) NSUndoManager * undoManager;                                          //@synthesize undoManager=_undoManager - In the implementation block
-(id)eventForID:(unsigned)arg1 ;
-(unsigned)addEventWithEventDescription:(NSDictionary*)arg1 registerUndo:(char)arg2 ;
-(unsigned)legacyAddEventWithRecordingID:(int)arg1 timestamp:(double)arg2 ;
-(unsigned)addEventBackwardsFromCurrentTimeWithDuration:(double)arg1 registerUndo:(char)arg2 ;
-(id)_eventPropertyForEvent:(unsigned)arg1 key:(id)arg2 success:(char*)arg3 ;
-(NSDictionary*)_eventDescriptionForID:(unsigned)arg1 ;
-(id)intervalTreeForRecordingID:(int)arg1 ;
-(unsigned)_recordingIDForEventID:(unsigned)arg1 success:(char*)arg2 ;
-(double)_timestampForEventID:(unsigned)arg1 success:(char*)arg2 ;
-(double)_durationForEventID:(unsigned)arg1 success:(char*)arg2 ;
-(char)seekToEventID:(unsigned)arg1 end:(char)arg2 ;
-(char)_addEvent:(NSDictionary*)arg1 withID:(unsigned)arg2 registerUndo:(char)arg3 ;
-(void)_insertDecodedEvents:(id)arg1 ;
-(id<NBCPEventManagerRecordingDelegate>)recordingDelegate;
-(unsigned)_addEventWithTimestamp:(double)arg1 duration:(id)arg2 recordingID:(id)arg3 registerUndo:(char)arg4 ;
-(NSDictionary*)_removeEvent:(NSDictionary*)arg1 withID:(unsigned)arg2 registerUndo:(char)arg3 ;
-(void)_topLevelUndoRedo:(id)arg1 ;
-(unsigned)getNewToken;
-(char)eventExistsWithEventID:(unsigned)arg1 ;
-(unsigned)stateForEventID:(unsigned)arg1 atCumulativeTime:(double)arg2 ;
-(unsigned)_stateForEventAtTime:(double)arg1 eventStartTime:(double)arg2 duration:(double)arg3 ;
-(double)_cumulativeTimeForEventID:(unsigned)arg1 success:(char*)arg2 ;
-(double)cumulativeTime;
-(void)setRecordingDelegate:(id<NBCPEventManagerRecordingDelegate>)arg1 ;
-(void)deleteEventsAssociatedWithRecordingID:(int)arg1 ;
-(NSDictionary*)deleteEventWithID:(unsigned)arg1 registerUndo:(char)arg2 ;
-(unsigned)_stateForEventIDAssertExists:(unsigned)arg1 atCumulativeTime:(double)arg2 ;
-(float)eventCompletionProgressForEventID:(unsigned)arg1 atCumulativeTime:(double)arg2 ;
-(void)notifyListenersForTime:(double)arg1 lastTime:(double)arg2 ;
-(double)timeIntervalSinceCumulativeTime:(double)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSUndoManager *)undoManager;
-(void)setUndoManager:(NSUndoManager *)arg1 ;
@end

