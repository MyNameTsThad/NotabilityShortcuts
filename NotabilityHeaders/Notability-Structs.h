/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:17 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct NSRange {
	unsigned location;
	unsigned length;
} NSRange;

typedef struct CGPoint {
	float x;
	float y;
} CGPoint;

typedef struct CGSize {
	float width;
	float height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct {
	int xLocation;
	int yLocation;
	int xLength;
	int yLength;
} SCD_Struct_Pr4;

typedef struct CGAffineTransform {
	float a;
	float b;
	float c;
	float d;
	float tx;
	float ty;
} CGAffineTransform;

typedef struct CGLayer* CGLayerRef;

typedef struct {
	CGPoint field1;
	CGPoint field2;
	float field3;
	float field4;
	float field5;
} SCD_Struct_Pr7;

typedef struct CGPath* CGPathRef;

typedef struct CGPDFDictionary* CGPDFDictionaryRef;

typedef struct CGContext* CGContextRef;

typedef struct UIEdgeInsets {
	float top;
	float left;
	float bottom;
	float right;
} UIEdgeInsets;

typedef struct CGPDFString* CGPDFStringRef;

typedef struct vector<myscript::iink::text::TextSpan, std::__1::allocator<myscript::iink::text::TextSpan> >* vector<myscript::iink::text::TextSpan, std::__1::allocator<myscript::iink::text::TextSpan> >Ref;

typedef struct shared_ptr<myscript::iink::Engine> {
	Engine __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<myscript::iink::Engine>;

typedef struct shared_ptr<myscript::iink::Renderer> {
	Renderer __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<myscript::iink::Renderer>;

typedef struct _NSZone* NSZoneRef;

typedef struct __CTLine* CTLineRef;

typedef struct __CTTypesetter* CTTypesetterRef;

typedef struct {
	char* field1;
	char* field2;
	char* field3;
	int field4;
} SCD_Struct_OU19;

typedef struct {
	unsigned bold : 1;
	unsigned italic : 1;
} SCD_Struct_OU20;

typedef struct {
	SCD_Struct_OU20 flags;
	int fontSize;
	int fontIndex;
	int colorIndex;
	unsigned underline;
	int alignment;
	int firstLineIndent;
	int leftIndent;
	int rightIndent;
} SCD_Struct_OU21;

typedef struct opaque_pthread_rwlock_t {
	long __sig;
	char __opaque[124];
} opaque_pthread_rwlock_t;

typedef struct opaqueCMSampleBuffer* opaqueCMSampleBufferRef;

typedef struct {
	long long field1;
	int field2;
	unsigned field3;
	long long field4;
} SCD_Struct_NB24;

typedef struct CGColor* CGColorRef;

typedef struct CGPDFDocument* CGPDFDocumentRef;

typedef struct CGPDFPage* CGPDFPageRef;

typedef struct __CFFileDescriptor* CFFileDescriptorRef;

typedef struct __CFRunLoopSource* CFRunLoopSourceRef;

typedef struct __CTFont* CTFontRef;

typedef struct __CTRun* CTRunRef;

typedef struct __SCNetworkReachability* SCNetworkReachabilityRef;

typedef struct CGPDFOperatorTable* CGPDFOperatorTableRef;

typedef struct CGPDFContentStream* CGPDFContentStreamRef;

typedef struct {
	CGRect rect;
	float points;
	float widths;
	float maxWidth;
	unsigned numPoints;
} SCD_Struct_In35;

typedef struct {
	CGRect field1;
	float field2;
	float field3;
	float field4;
	unsigned field5;
} SCD_Struct_In36;

typedef struct {
	unsigned char alignment;
	int firstLineIndent;
	int leftIndent;
	int rightIndent;
} SCD_Struct_OU37;

typedef struct AudioStreamBasicDescription {
	double mSampleRate;
	unsigned mFormatID;
	unsigned mFormatFlags;
	unsigned mBytesPerPacket;
	unsigned mFramesPerPacket;
	unsigned mBytesPerFrame;
	unsigned mChannelsPerFrame;
	unsigned mBitsPerChannel;
	unsigned mReserved;
} AudioStreamBasicDescription;

typedef struct OpaqueExtAudioFile* OpaqueExtAudioFileRef;

typedef struct opaque_pthread_mutex_t {
	long __sig;
	char __opaque[40];
} opaque_pthread_mutex_t;

typedef struct opaque_pthread_cond_t {
	long __sig;
	char __opaque[24];
} opaque_pthread_cond_t;

typedef struct {
	unsigned long field1;
	id field2;
	unsigned long field3;
	unsigned long field4[5];
} SCD_Struct_GL42;

typedef struct CGDataConsumer* CGDataConsumerRef;

typedef struct AURenderCallbackStruct {
	/*function pointer*/void* inputProc;
	void inputProcRefCon;
} AURenderCallbackStruct;

typedef struct CAStreamBasicDescription {
	double mSampleRate;
	unsigned mFormatID;
	unsigned mFormatFlags;
	unsigned mBytesPerPacket;
	unsigned mFramesPerPacket;
	unsigned mBytesPerFrame;
	unsigned mChannelsPerFrame;
	unsigned mBitsPerChannel;
	unsigned mReserved;
} CAStreamBasicDescription;

typedef struct OpaqueAUGraph* OpaqueAUGraphRef;

typedef struct OpaqueAudioComponentInstance* OpaqueAudioComponentInstanceRef;

typedef struct CGPDFArray* CGPDFArrayRef;

typedef struct CGGradient* CGGradientRef;

typedef struct OFCaseConversionBuffer {
	__CFString string;
	unsigned short buffer;
	int bufferSize;
} OFCaseConversionBuffer;

typedef struct {
	unsigned field1;
	unsigned field2;
	unsigned field3;
} SCD_Struct_CL51;

typedef struct {
	void field1;
	unsigned long long field2;
	void field3;
} SCD_Struct_CL52;

typedef struct {
	char field1[33];
	BOOL field2;
	SCD_Struct_CL51 field3;
	SCD_Struct_CL51 field4;
	SCD_Struct_CL52 field5;
	unsigned char field6;
	unsigned long field7;
	unsigned short field8;
	M field9;
	a field10;
	char field11;
	h field12;
	O field13;
	unsigned short field14;
	long field15;
	int field16;
	char field17;
	e field18;
	int field19;
} SCD_Struct_CL53;

typedef struct {
	char* field1;
	void field2;
	BOOL field3;
	void field4;
	char* field5;
	char* field6;
	char* field7;
	char* field8;
	char* field9;
	unsigned field10;
	BOOL field11;
	BOOL field12;
	unsigned field13;
	unsigned field14;
	unsigned field15;
	unsigned field16;
} SCD_Struct_CL54;

typedef struct {
	char* field1;
	char* field2;
	unsigned field3;
	unsigned field4;
} SCD_Struct_CL55;

typedef struct __SecCertificate* SecCertificateRef;

typedef struct __SecTrust* SecTrustRef;

typedef struct {
	unsigned major;
	unsigned minor;
	unsigned bugfix;
} SCD_Struct_FA58;

typedef struct CLSMachOFile {
	int fd;
	unsigned mappedSize;
	void mappedFile;
} CLSMachOFile;

typedef struct CLSMachOSlice {
	void startAddress;
	int cputype;
	int cpusubtype;
} CLSMachOSlice;

typedef struct {
	void field1;
	int field2;
	char* field3;
} SCD_Struct_CL61;

typedef struct __SecKey* SecKeyRef;

typedef struct sqlite3* sqlite3Ref;

typedef struct sqlite3_stmt* sqlite3_stmtRef;

typedef struct __CFString* CFStringRef;

typedef struct auto_ptr<pdftron::PDF::PDFDoc> {
	PDFDoc __ptr_;
} auto_ptr<pdftron::PDF::PDFDoc>;

typedef struct shared_ptr<myscript::iink::ContentBlock> {
	ContentBlock __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<myscript::iink::ContentBlock>;

typedef struct shared_ptr<myscript::iink::Configuration> {
	Configuration __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<myscript::iink::Configuration>;

typedef struct shared_ptr<myscript::iink::IINKIConfigurationListenerStub> {
	IINKIConfigurationListenerStub __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<myscript::iink::IINKIConfigurationListenerStub>;

typedef struct Color {
	unsigned rgba;
} Color;

typedef struct _compressed_pair<float *, std::__1::allocator<float> > {
	float __value_;
} compressed_pair<float *, std::__1::allocator<float> >;

typedef struct _compressed_pair<myscript::iink::String::StringImpl *, std::__1::default_delete<myscript::iink::String::StringImpl> > {
	StringImpl __value_;
} compressed_pair<myscript::iink::String::StringImpl *, std::__1::default_delete<myscript::iink::String::StringImpl> >;

typedef struct unique_ptr<myscript::iink::String::StringImpl, std::__1::default_delete<myscript::iink::String::StringImpl> > {
	compressed_pair<myscript::iink::String::StringImpl *, std::__1::default_delete<myscript::iink::String::StringImpl> > __ptr_;
} unique_ptr<myscript::iink::String::StringImpl, std::__1::default_delete<myscript::iink::String::StringImpl> >;

typedef struct String {
	unique_ptr<myscript::iink::String::StringImpl, std::__1::default_delete<myscript::iink::String::StringImpl> > impl;
} String;

typedef struct vector<float, std::__1::allocator<float> > {
	float __begin_;
	float __end_;
	compressed_pair<float *, std::__1::allocator<float> > __end_cap_;
} vector<float, std::__1::allocator<float> >;

typedef struct Style {
	Color strokeColor;
	float strokeWidth;
	int strokeLineCap;
	int strokeLineJoin;
	float strokeMiterLimit;
	vector<float, std::__1::allocator<float> > strokeDashArray;
	float strokeDashOffset;
	Color fillColor;
	int fillRule;
	String fontFamily;
	float fontLineHeight;
	float fontSize;
	String fontStyle;
	String fontVariant;
	int fontWeight;
	unsigned changeFlags;
} Style;

typedef struct shared_ptr<myscript::iink::ContentPackage> {
	ContentPackage __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<myscript::iink::ContentPackage>;

typedef struct shared_ptr<myscript::iink::ParameterSet> {
	ParameterSet __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<myscript::iink::ParameterSet>;

typedef struct shared_ptr<myscript::iink::text::Text> {
	Text __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<myscript::iink::text::Text>;

typedef struct shared_ptr<myscript::iink::RecognitionAssetsBuilder> {
	RecognitionAssetsBuilder __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<myscript::iink::RecognitionAssetsBuilder>;

typedef struct TextSpan {
	int beginPosition;
	int endPosition;
	Style style;
} TextSpan;

typedef struct shared_ptr<myscript::iink::ContentPart> {
	ContentPart __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<myscript::iink::ContentPart>;

typedef struct shared_ptr<myscript::iink::IINKIRenderTargetStub> {
	IINKIRenderTargetStub __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<myscript::iink::IINKIRenderTargetStub>;

typedef struct shared_ptr<myscript::iink::IINKIRendererListenerStub> {
	IINKIRendererListenerStub __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<myscript::iink::IINKIRendererListenerStub>;

typedef struct shared_ptr<myscript::iink::Editor> {
	Editor __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<myscript::iink::Editor>;

typedef struct shared_ptr<myscript::iink::IINKIEditorListenerStub> {
	IINKIEditorListenerStub __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<myscript::iink::IINKIEditorListenerStub>;

