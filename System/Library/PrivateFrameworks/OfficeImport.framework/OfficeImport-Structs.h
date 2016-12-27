/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:22 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSUUID, OITSUCustomFormat, <TSUMultipleChoiceListChoiceProviding>, OITSUColor, EDString, WDBorder, NSMutableArray, NSDate, WDShading, WDStyle;

typedef struct CGColor* CGColorRef;

typedef struct ODIHRange {
	float mMid;
	float mLength;
} ODIHRange;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct __CFData* CFDataRef;

typedef struct CGDataConsumer* CGDataConsumerRef;

typedef struct CGContext* CGContextRef;

typedef struct CGImage* CGImageRef;

typedef struct CGPath* CGPathRef;

typedef struct _NSZone* NSZoneRef;

typedef struct {
	BOOL primaryCategoryHasDates;
	BOOL secondaryCategoryHasDates;
	BOOL primaryAxisHasDates;
	BOOL secondaryAxisHasDates;
} SCD_Struct_EM11;

typedef struct __CFNumberFormatter* CFNumberFormatterRef;

typedef struct __CFDateFormatter* CFDateFormatterRef;

typedef struct {
	/*function pointer*/void* field1;
	/*function pointer*/void* field2;
	/*function pointer*/void* field3;
	/*function pointer*/void* field4;
	/*function pointer*/void* field5;
} SCD_Struct_CM14;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct __CFString* CFStringRef;

typedef struct {
	unsigned long long field1;
	id field2;
	unsigned long long field3;
	unsigned long long field4[5];
} SCD_Struct_OI17;

typedef struct __CFLocale* CFLocaleRef;

typedef struct {
	unsigned field1 : 16;
	6 field2;
	unsigned field3 : 8;
	unsigned field4 : 3;
	unsigned field5 : 1;
	unsigned field6 : 1;
} SCD_Struct_TS19;

typedef struct {
	unsigned field1 : 8;
} SCD_Struct_TS20;

typedef struct {
	unsigned field1 : 8;
	unsigned field2 : 8;
	unsigned field3 : 1;
} SCD_Struct_TS21;

typedef struct {
	unsigned field1 : 1;
	unsigned field2 : 1;
	id field3;
} SCD_Struct_TS22;

typedef struct {
	unsigned field1 : 1;
	int field2;
	int field3;
	int field4;
} SCD_Struct_TS23;

typedef struct {
	id field1;
	id field2;
	unsigned field3;
	unsigned char field4;
} SCD_Struct_TS24;

typedef struct {
	double field1;
	double field2;
	double field3;
	int field4;
	unsigned field5 : 2;
	unsigned field6 : 2;
} SCD_Struct_TS25;

typedef struct {
	int field1;
	unsigned field2;
	id field3;
} SCD_Struct_TS26;

typedef struct {
	int( field1;
	/*function pointer*/void* field2;
	= field3;
	SCD_Struct_TS19 field4;
	SCD_Struct_TS20 field5;
	SCD_Struct_TS21 field6;
	SCD_Struct_TS22 field7;
	SCD_Struct_TS23 field8;
	SCD_Struct_TS24 field9;
	SCD_Struct_TS25 field10;
	SCD_Struct_TS26) field11;
} SCD_Struct_TS27;

typedef struct {
	unsigned long long field1;
	unsigned long long field2;
} SCD_Struct_TS28;

typedef struct __CFDate* CFDateRef;

typedef struct __CFArray* CFArrayRef;

typedef struct opaque_pthread_mutex_t {
	long long __sig;
	char __opaque[56];
} opaque_pthread_mutex_t;

typedef struct __CFBundle* CFBundleRef;

typedef struct _compressed_pair<_NSRange *, std::__1::allocator<_NSRange> > {
	_NSRange __first_;
} compressed_pair<_NSRange *, std::__1::allocator<_NSRange> >;

typedef struct vector<_NSRange, std::__1::allocator<_NSRange> > {
	_NSRange __begin_;
	_NSRange __end_;
	compressed_pair<_NSRange *, std::__1::allocator<_NSRange> > __end_cap_;
} vector<_NSRange, std::__1::allocator<_NSRange> >;

typedef struct timeval {
	long long tv_sec;
	int tv_usec;
} timeval;

typedef struct TSUOpstat_s {
	BOOL running;
	unsigned long long count;
	timeval min_time;
	timeval max_time;
	timeval total_time;
	timeval last_time;
} TSUOpstat_s;

typedef struct _compressed_pair<CGRect *, std::__1::allocator<CGRect> > {
	CGRect __first_;
} compressed_pair<CGRect *, std::__1::allocator<CGRect> >;

typedef struct vector<CGRect, std::__1::allocator<CGRect> > {
	CGRect __begin_;
	CGRect __end_;
	compressed_pair<CGRect *, std::__1::allocator<CGRect> > __end_cap_;
} vector<CGRect, std::__1::allocator<CGRect> >;

typedef struct __CFSet* CFSetRef;

typedef struct {
	unsigned char field1;
	unsigned char field2;
	unsigned char field3;
	unsigned char field4;
} SCD_Struct_OI40;

typedef struct _compressed_pair<boost::shared_ptr<TSUStringChunk> *, std::__1::allocator<boost::shared_ptr<TSUStringChunk> > > {
	shared_ptr<TSUStringChunk> __first_;
} compressed_pair<boost::shared_ptr<TSUStringChunk> *, std::__1::allocator<boost::shared_ptr<TSUStringChunk> > >;

typedef struct vector<boost::shared_ptr<TSUStringChunk>, std::__1::allocator<boost::shared_ptr<TSUStringChunk> > > {
	shared_ptr<TSUStringChunk> __begin_;
	shared_ptr<TSUStringChunk> __end_;
	compressed_pair<boost::shared_ptr<TSUStringChunk> *, std::__1::allocator<boost::shared_ptr<TSUStringChunk> > > __end_cap_;
} vector<boost::shared_ptr<TSUStringChunk>, std::__1::allocator<boost::shared_ptr<TSUStringChunk> > >;

typedef struct {
	long long field1;
	/*function pointer*/void* field2;
	/*function pointer*/void* field3;
	/*function pointer*/void* field4;
	/*function pointer*/void* field5;
	/*function pointer*/void* field6;
} SCD_Struct_OI43;

typedef struct {
	long long field1;
	/*function pointer*/void* field2;
	/*function pointer*/void* field3;
	/*function pointer*/void* field4;
	/*function pointer*/void* field5;
} SCD_Struct_OI44;

typedef struct CGImageSource* CGImageSourceRef;

typedef struct _CCCryptor* CCCryptorRef;

typedef struct _xmlTextReader* xmlTextReaderRef;

typedef struct CGDataProvider* CGDataProviderRef;

typedef struct {
	unsigned mCurrencyCodeIndex : 16;
	unsigned mDecimalPlaces : 8;
	unsigned mNegativeStyle : 3;
	unsigned mShowThousandsSeparator : 1;
	unsigned mUseAccountingStyle : 1;
} SCD_Struct_OI49;

typedef struct {
	unsigned mSuppressDateFormat : 1;
	unsigned mSuppressTimeFormat : 1;
	NSString* mDateTimeFormat;
} SCD_Struct_OI50;

typedef struct {
	unsigned mUseAutomaticUnits : 1;
	int mDurationUnitSmallest;
	int mDurationUnitLargest;
	int mDurationStyle;
} SCD_Struct_OI51;

typedef struct {
	NSUUID* mCustomFormatKey;
	OITSUCustomFormat* mCustomFormat;
	unsigned mLegacyID;
	unsigned char mAppliedConditionKey;
} SCD_Struct_OI52;

typedef struct {
	double mMinimum;
	double mMaximum;
	double mIncrement;
	int mDisplayFormatType;
	unsigned mOrientation : 2;
	unsigned mPosition : 2;
} SCD_Struct_OI53;

typedef struct {
	int mInitialValue;
	unsigned mMultipleChoiceListFormatID;
	<TSUMultipleChoiceListChoiceProviding>* mData;
} SCD_Struct_OI54;

typedef struct {
	int mFormatType;
	/*function pointer*/void* ;
	SCD_Struct_OI49 mNumberFormatStruct;
	SCD_Struct_TS20 mFractionFormatStruct;
	SCD_Struct_TS21 mBaseFormatStruct;
	SCD_Struct_OI50 mDateFormatStruct;
	SCD_Struct_OI51 mDurationFormatStruct;
	SCD_Struct_OI52 mCustomFormatStruct;
	SCD_Struct_OI53 mControlFormatStruct;
	SCD_Struct_OI54) mMultipleChoiceListFormatStruct;
} SCD_Struct_OI55;

typedef struct {
	int( field1;
	/*function pointer*/void* field2;
	= field3;
	SCD_Struct_TS20 field4;
	SCD_Struct_TS21 field5;
	SCD_Struct_TS22 field6;
	SCD_Struct_TS24 field7;
	SCD_Struct_TS26 field8;
	SCD_Struct_OI49 field9;
	SCD_Struct_OI51 field10;
	SCD_Struct_OI53) field11;
} SCD_Struct_OI56;

typedef struct z_stream_s {
	char* next_in;
	unsigned avail_in;
	unsigned long long total_in;
	char* next_out;
	unsigned avail_out;
	unsigned long long total_out;
	char* msg;
	internal_state state;
	/*function pointer*/void* zalloc;
	/*function pointer*/void* zfree;
	void opaque;
	int data_type;
	unsigned long long adler;
	unsigned long long reserved;
} z_stream_s;

typedef struct TCFontStyling {
	int fontClass;
	unsigned stringEncoding;
	char weight;
	BOOL italic;
	int width;
} TCFontStyling;

typedef struct _xmlTextWriter* xmlTextWriterRef;

typedef struct __CTFont* CTFontRef;

typedef const struct EshTablePropVal<EshGradientStop>* EshTablePropVal<EshGradientStop>Ref;

typedef const struct EshTablePropVal<int>* EshTablePropVal<int>Ref;

typedef struct EshShape* EshShapeRef;

typedef struct EshContent* EshContentRef;

typedef struct OADFormulaArg {
	int type;
	int value;
} OADFormulaArg;

typedef struct OADAdjustCoord {
	BOOL isFormulaResult;
	int value;
} OADAdjustCoord;

typedef struct OADAdjustPoint {
	OADAdjustCoord x;
	OADAdjustCoord y;
} OADAdjustPoint;

typedef struct OcReader* OcReaderRef;

typedef struct OcWriter* OcWriterRef;

typedef struct OADCachedTextStyleData {
	unsigned verticalAlign : 3;
	short lineSpacing;
	short beforeSpacing;
	short afterSpacing;
	short leftMargin;
	short rightMargin;
	short indent;
	short defaultTab;
	unsigned horizontalAlign : 4;
	unsigned short fontFaceIndex;
	short fontSize;
	unsigned short fontColorIndex;
	unsigned bold : 1;
	unsigned italic : 1;
	unsigned underline : 5;
	unsigned format : 2;
	unsigned kerning : 2;
	unsigned strikethrough : 2;
	unsigned caps : 2;
} OADCachedTextStyleData;

typedef struct CGAffineTransform {
	double a;
	double b;
	double c;
	double d;
	double tx;
	double ty;
} CGAffineTransform;

typedef struct CGShading* CGShadingRef;

typedef struct CGFunction* CGFunctionRef;

typedef struct {
	OITSUColor* mLow;
	OITSUColor* mHigh;
} SCD_Struct_MF74;

typedef struct _SsrwPropertyStorage* SsrwPropertyStorageRef;

typedef struct SSRW_BLOB {
	unsigned cbSize;
	char* pData;
} SSRW_BLOB;

typedef struct SSRW_FILETIME {
	unsigned dwLowDateTime;
	unsigned dwHighDateTime;
} SSRW_FILETIME;

typedef struct SsrwPropVariant {
	unsigned short vt;
	/*function pointer*/void* v;
	unsigned char cVal;
	short iVal;
	int lVal;
	double dblVal;
	unsigned short bstrVal;
	SSRW_BLOB blob;
	char* pszVal;
	SSRW_FILETIME filetime;
	_SSRW_CLIPDATA pclipdata;
	s) boolVal;
} SsrwPropVariant;

typedef struct _RootStorage* RootStorageRef;

typedef struct {
	unsigned m_data1;
	unsigned short m_data2;
	unsigned short m_data3;
	unsigned char m_data4[8];
} SCD_Struct_ST80;

typedef struct _Storage* StorageRef;

typedef struct _Stream* StreamRef;

typedef struct EDValue {
	int type;
	/*function pointer*/void* ;
	BOOL boolean;
	double number;
	EDString* string;
	unsigned long long stringIndex;
	i) error;
} EDValue;

typedef struct CHDDataPoint {
	unsigned long long index;
	EDValue value;
	unsigned long long contentFormatId;
} CHDDataPoint;

typedef struct OCCCryptoKey* OCCCryptoKeyRef;

typedef struct _compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, unsigned long>, std::__1::less<int>, true> > {
	unsigned long long __first_;
} compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, unsigned long>, std::__1::less<int>, true> >;

typedef struct _tree_end_node<std::__1::__tree_node_base<void *> *> {
	__tree_node_base<void *> __left_;
} tree_end_node<std::__1::__tree_node_base<void *> *>;

typedef struct _compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, unsigned long>, void *> > > {
	tree_end_node<std::__1::__tree_node_base<void *> *> __first_;
} compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, unsigned long>, void *> > >;

typedef struct _tree<std::__1::__value_type<int, unsigned long>, std::__1::__map_value_compare<int, std::__1::__value_type<int, unsigned long>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, unsigned long> > > {
	__tree_node<std::__1::__value_type<int, unsigned long>, void *> __begin_node_;
	compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, unsigned long>, void *> > > __pair1_;
	compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, unsigned long>, std::__1::less<int>, true> > __pair3_;
} tree<std::__1::__value_type<int, unsigned long>, std::__1::__map_value_compare<int, std::__1::__value_type<int, unsigned long>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, unsigned long> > >;

typedef struct map<int, unsigned long, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, unsigned long> > > {
	tree<std::__1::__value_type<int, unsigned long>, std::__1::__map_value_compare<int, std::__1::__value_type<int, unsigned long>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, unsigned long> > > __tree_;
} map<int, unsigned long, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, unsigned long> > >;

typedef struct _compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, unsigned long>, std::__1::less<unsigned long>, true> > {
	unsigned long long __first_;
} compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, unsigned long>, std::__1::less<unsigned long>, true> >;

typedef struct _compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned long, unsigned long>, void *> > > {
	tree_end_node<std::__1::__tree_node_base<void *> *> __first_;
} compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned long, unsigned long>, void *> > >;

typedef struct _tree<std::__1::__value_type<unsigned long, unsigned long>, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, unsigned long>, std::__1::less<unsigned long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long, unsigned long> > > {
	__tree_node<std::__1::__value_type<unsigned long, unsigned long>, void *> __begin_node_;
	compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned long, unsigned long>, void *> > > __pair1_;
	compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, unsigned long>, std::__1::less<unsigned long>, true> > __pair3_;
} tree<std::__1::__value_type<unsigned long, unsigned long>, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, unsigned long>, std::__1::less<unsigned long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long, unsigned long> > >;

typedef struct map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long> > > {
	tree<std::__1::__value_type<unsigned long, unsigned long>, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, unsigned long>, std::__1::less<unsigned long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long, unsigned long> > > __tree_;
} map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long> > >;

typedef struct EDCellAnchorMarker {
	int columnIndex;
	float columnAdjustment;
	int rowIndex;
	float rowAdjustment;
} EDCellAnchorMarker;

typedef struct EDAreaReference {
	int firstRow;
	int firstColumn;
	int lastRow;
	int lastColumn;
} EDAreaReference;

typedef struct EFRefTok {
	int type;
	unsigned dataSize;
	unsigned char data[12];
} EFRefTok;

typedef struct _compressed_pair<unsigned long, std::__1::__map_value_compare<long, std::__1::__value_type<long, unsigned long>, std::__1::less<long>, true> > {
	unsigned long long __first_;
} compressed_pair<unsigned long, std::__1::__map_value_compare<long, std::__1::__value_type<long, unsigned long>, std::__1::less<long>, true> >;

typedef struct _compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long, unsigned long>, void *> > > {
	tree_end_node<std::__1::__tree_node_base<void *> *> __first_;
} compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long, unsigned long>, void *> > >;

typedef struct _tree<std::__1::__value_type<long, unsigned long>, std::__1::__map_value_compare<long, std::__1::__value_type<long, unsigned long>, std::__1::less<long>, true>, std::__1::allocator<std::__1::__value_type<long, unsigned long> > > {
	__tree_node<std::__1::__value_type<long, unsigned long>, void *> __begin_node_;
	compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long, unsigned long>, void *> > > __pair1_;
	compressed_pair<unsigned long, std::__1::__map_value_compare<long, std::__1::__value_type<long, unsigned long>, std::__1::less<long>, true> > __pair3_;
} tree<std::__1::__value_type<long, unsigned long>, std::__1::__map_value_compare<long, std::__1::__value_type<long, unsigned long>, std::__1::less<long>, true>, std::__1::allocator<std::__1::__value_type<long, unsigned long> > >;

typedef struct map<long, unsigned long, std::__1::less<long>, std::__1::allocator<std::__1::pair<const long, unsigned long> > > {
	tree<std::__1::__value_type<long, unsigned long>, std::__1::__map_value_compare<long, std::__1::__value_type<long, unsigned long>, std::__1::less<long>, true>, std::__1::allocator<std::__1::__value_type<long, unsigned long> > > __tree_;
} map<long, unsigned long, std::__1::less<long>, std::__1::allocator<std::__1::pair<const long, unsigned long> > >;

typedef const struct WrdDateTime* WrdDateTimeRef;

typedef struct WrdObject* WrdObjectRef;

typedef struct {
	id field1;
	id field2;
	id field3;
	id field4;
	id field5;
	id field6;
	id field7;
	int field8;
	int field9;
	int field10;
	int field11;
	id field12;
	id field13;
	id field14;
	id field15;
	id field16;
	int field17;
	int field18;
	int field19;
	short field20;
	short field21;
	id field22;
	id field23;
	float field24;
	unsigned short field25;
	unsigned short field26;
	unsigned short field27;
	unsigned short field28;
	unsigned short field29;
	unsigned short field30;
	unsigned short field31;
	unsigned char field32;
	unsigned char field33;
	float field34;
	unsigned char field35;
	unsigned char field36;
	unsigned char field37;
	unsigned char field38;
	unsigned char field39;
	unsigned char field40;
	unsigned char field41;
	unsigned char field42;
	int field43;
	unsigned char field44;
	unsigned char field45;
	BOOL field46;
	unsigned char field47;
	unsigned char field48;
	unsigned char field49;
	unsigned char field50;
	unsigned char field51;
	unsigned char field52;
	unsigned char field53;
	unsigned char field54;
	unsigned char field55;
	unsigned char field56;
	unsigned short field57;
	unsigned field58 : 1;
	unsigned field59 : 1;
	unsigned field60 : 1;
	unsigned field61 : 1;
	unsigned field62 : 1;
	unsigned field63 : 1;
	unsigned field64 : 1;
	unsigned field65 : 1;
	unsigned field66 : 1;
	unsigned field67 : 1;
	unsigned field68 : 1;
	unsigned field69 : 1;
	unsigned field70 : 1;
	unsigned field71 : 1;
	unsigned field72 : 1;
	unsigned field73 : 1;
	unsigned field74 : 1;
	unsigned field75 : 1;
	unsigned field76 : 1;
	unsigned field77 : 1;
	unsigned field78 : 1;
	unsigned field79 : 1;
	unsigned field80 : 1;
	unsigned field81 : 1;
	unsigned field82 : 1;
	unsigned field83 : 1;
	unsigned field84 : 1;
	unsigned field85 : 1;
	unsigned field86 : 1;
	unsigned field87 : 1;
	unsigned field88 : 1;
	unsigned field89 : 1;
	unsigned field90 : 1;
	unsigned field91 : 1;
	unsigned field92 : 1;
	unsigned field93 : 1;
	unsigned field94 : 1;
	unsigned field95 : 1;
	unsigned field96 : 1;
	unsigned field97 : 1;
	unsigned field98 : 1;
	unsigned field99 : 1;
	unsigned field100 : 1;
	unsigned field101 : 1;
	unsigned field102 : 1;
	unsigned field103 : 1;
	unsigned field104 : 1;
	unsigned field105 : 1;
	unsigned field106 : 1;
	unsigned field107 : 1;
	unsigned field108 : 1;
	unsigned field109 : 1;
	unsigned field110 : 1;
	unsigned field111 : 1;
	unsigned field112 : 1;
	unsigned field113 : 1;
	unsigned field114 : 1;
	unsigned field115 : 1;
	unsigned field116 : 1;
	unsigned field117 : 1;
	unsigned field118 : 1;
	unsigned field119 : 1;
	unsigned field120 : 1;
	unsigned field121 : 1;
	unsigned field122 : 1;
	unsigned field123 : 1;
	unsigned field124 : 1;
	unsigned field125 : 1;
	unsigned field126 : 1;
	unsigned field127 : 1;
	unsigned field128 : 1;
	unsigned field129 : 1;
	unsigned field130 : 1;
	unsigned field131 : 1;
	unsigned field132 : 1;
	unsigned field133 : 1;
	unsigned field134 : 1;
} SCD_Struct_WD104;

typedef struct {
	unsigned char field1;
	unsigned char field2;
} SCD_Struct_WD105;

typedef struct {
	id field1;
	id field2;
	id field3;
	id field4;
	id field5;
	id field6;
	id field7;
	id field8;
	SCD_Struct_WD105 field9;
	id field10;
	id field11;
	long long field12;
	unsigned long long field13;
	unsigned long long field14;
	long long field15;
	long long field16;
	long long field17;
	long long field18;
	long long field19;
	short field20;
	short field21;
	short field22;
	short field23;
	short field24;
	short field25;
	short field26;
	short field27;
	short field28;
	unsigned short field29;
	unsigned short field30;
	unsigned short field31;
	unsigned short field32;
	unsigned short field33;
	char field34;
	unsigned char field35;
	unsigned char field36;
	unsigned char field37;
	unsigned char field38;
	unsigned char field39;
	unsigned char field40;
	unsigned char field41;
	unsigned char field42;
	unsigned field43 : 1;
	unsigned field44 : 1;
	unsigned field45 : 1;
	unsigned field46 : 1;
	unsigned field47 : 1;
	unsigned field48 : 1;
	unsigned field49 : 1;
	unsigned field50 : 1;
	unsigned field51 : 1;
	unsigned field52 : 1;
	unsigned field53 : 1;
	unsigned field54 : 1;
	unsigned field55 : 1;
	unsigned field56 : 1;
	unsigned field57 : 1;
	unsigned field58 : 1;
	unsigned field59 : 1;
	unsigned field60 : 1;
	unsigned field61 : 1;
	unsigned field62 : 1;
	unsigned field63 : 1;
	unsigned field64 : 1;
	unsigned field65 : 1;
	unsigned field66 : 1;
	unsigned field67 : 1;
	unsigned field68 : 1;
	unsigned field69 : 1;
	unsigned field70 : 1;
	unsigned field71 : 1;
	unsigned field72 : 1;
	unsigned field73 : 1;
	unsigned field74 : 1;
	unsigned field75 : 1;
	unsigned field76 : 1;
	unsigned field77 : 1;
	unsigned field78 : 1;
	unsigned field79 : 1;
	unsigned field80 : 1;
	unsigned field81 : 1;
	unsigned field82 : 1;
	unsigned field83 : 1;
	unsigned field84 : 1;
	unsigned field85 : 1;
	unsigned field86 : 1;
	unsigned field87 : 1;
	unsigned field88 : 1;
	unsigned field89 : 1;
	unsigned field90 : 1;
	unsigned field91 : 1;
	unsigned field92 : 1;
	unsigned field93 : 1;
	unsigned field94 : 1;
	unsigned field95 : 1;
	unsigned field96 : 1;
	unsigned field97 : 1;
	unsigned field98 : 1;
	unsigned field99 : 1;
	unsigned field100 : 1;
	unsigned field101 : 1;
	unsigned field102 : 1;
	unsigned field103 : 1;
	unsigned field104 : 1;
	unsigned field105 : 1;
	unsigned field106 : 1;
	unsigned field107 : 1;
	unsigned field108 : 1;
	unsigned field109 : 1;
	unsigned field110 : 1;
} SCD_Struct_WD106;

typedef struct {
	short field1;
	unsigned char field2;
	unsigned char field3;
} SCD_Struct_WD107;

typedef struct {
	WDBorder* topBorder;
	WDBorder* leftBorder;
	WDBorder* bottomBorder;
	WDBorder* rightBorder;
	int breakType;
	long long pageWidth;
	long long pageHeight;
	unsigned pageScale;
	int pageOrientation;
	int textDirection;
	long long leftMargin;
	long long rightMargin;
	long long topMargin;
	long long bottomMargin;
	long long headerMargin;
	long long footerMargin;
	long long gutterMargin;
	BOOL rtlGutter;
	int borderDepth;
	int borderDisplay;
	int borderOffset;
	short lineNumberStart;
	unsigned short lineNumberIncrement;
	short lineNumberDistance;
	int lineNumberRestart;
	int pageNumberFormat;
	unsigned short pageNumberStart;
	int chapterNumberSeparator;
	NSMutableArray* columnWidths;
	NSMutableArray* columnSpaces;
	unsigned short columnCount;
	long long columnSpace;
	int verticalJustification;
	unsigned short indexToAuthorIDOfFormattingChange;
	NSDate* formattingChangeDate;
	unsigned bidi : 1;
	unsigned topBorderOverridden : 1;
	unsigned leftBorderOverridden : 1;
	unsigned bottomBorderOverridden : 1;
	unsigned rightBorderOverridden : 1;
	unsigned breakTypeOverridden : 1;
	unsigned pageWidthOverridden : 1;
	unsigned pageHeightOverridden : 1;
	unsigned pageScaleOverridden : 1;
	unsigned pageOrientationOverridden : 1;
	unsigned textDirectionOverridden : 1;
	unsigned leftMarginOverridden : 1;
	unsigned rightMarginOverridden : 1;
	unsigned topMarginOverridden : 1;
	unsigned bottomMarginOverridden : 1;
	unsigned headerMarginOverridden : 1;
	unsigned footerMarginOverridden : 1;
	unsigned gutterMarginOverridden : 1;
	unsigned rtlGutterOverridden : 1;
	unsigned borderDepthOverridden : 1;
	unsigned borderDisplayOverridden : 1;
	unsigned borderOffsetOverridden : 1;
	unsigned lineNumberStartOverridden : 1;
	unsigned lineNumberIncrementOverridden : 1;
	unsigned lineNumberDistanceOverridden : 1;
	unsigned lineNumberRestartOverridden : 1;
	unsigned pageNumberFormatOverridden : 1;
	unsigned pageNumberStartOverridden : 1;
	unsigned pageNumberRestart : 1;
	unsigned pageNumberRestartOverridden : 1;
	unsigned chapterNumberSeparatorOverridden : 1;
	unsigned columnCountOverridden : 1;
	unsigned columnsEqualWidth : 1;
	unsigned columnsEqualWidthOverridden : 1;
	unsigned columnSpaceOverridden : 1;
	unsigned verticalJustificationOverridden : 1;
	unsigned titlePage : 1;
	unsigned titlePageOverridden : 1;
	unsigned formattingChanged : 1;
	unsigned formattingChangedOverridden : 1;
	unsigned indexToAuthorIDOfFormattingChangeOverridden : 1;
	unsigned formattingChangeDateOverridden : 1;
	unsigned bidiOverridden : 1;
} SCD_Struct_WD108;

typedef struct {
	WDShading* shading;
	WDBorder* topBorder;
	WDBorder* leftBorder;
	WDBorder* bottomBorder;
	WDBorder* rightBorder;
	WDBorder* diagonalUpBorder;
	WDBorder* diagonalDownBorder;
	WDBorder* insideHorizontalBorder;
	WDBorder* insideVerticalBorder;
	int widthType;
	short topMargin;
	int topMarginType;
	short bottomMargin;
	int bottomMarginType;
	short leftMargin;
	int leftMarginType;
	short rightMargin;
	int rightMarginType;
	int verticalAlignment;
	char textDirection;
	int deleted;
	int edited;
	int formattingChanged;
	unsigned short indexToAuthorIDOfDeletion;
	unsigned short indexToAuthorIDOfEdit;
	unsigned short indexToAuthorIDOfFormattingChange;
	NSDate* deletionDate;
	NSDate* editDate;
	NSDate* formattingChangeDate;
	unsigned shadingOverridden : 1;
	unsigned topBorderOverridden : 1;
	unsigned leftBorderOverridden : 1;
	unsigned bottomBorderOverridden : 1;
	unsigned rightBorderOverridden : 1;
	unsigned diagonalUpBorderOverridden : 1;
	unsigned diagonalDownBorderOverridden : 1;
	unsigned insideHorizontalBorderOverridden : 1;
	unsigned insideVerticalBorderOverridden : 1;
	unsigned widthTypeOverridden : 1;
	unsigned topMarginOverridden : 1;
	unsigned topMarginTypeOverridden : 1;
	unsigned bottomMarginOverridden : 1;
	unsigned bottomMarginTypeOverridden : 1;
	unsigned leftMarginOverridden : 1;
	unsigned leftMarginTypeOverridden : 1;
	unsigned rightMarginOverridden : 1;
	unsigned rightMarginTypeOverridden : 1;
	unsigned verticalAlignmentOverridden : 1;
	unsigned textDirectionOverridden : 1;
	unsigned verticallyMergedCell : 1;
	unsigned verticallyMergedCellOverridden : 1;
	unsigned firstInSetOfVerticallyMergedCells : 1;
	unsigned firstInSetOfVerticallyMergedCellsOverridden : 1;
	unsigned noWrap : 1;
	unsigned noWrapOverridden : 1;
	unsigned deletedOverridden : 1;
	unsigned editedOverridden : 1;
	unsigned formattingChangedOverridden : 1;
	unsigned indexToAuthorIDOfDeletionOverridden : 1;
	unsigned indexToAuthorIDOfEditOverridden : 1;
	unsigned indexToAuthorIDOfFormattingChangeOverridden : 1;
	unsigned deletionDateOverridden : 1;
	unsigned editDateOverridden : 1;
	unsigned formattingChangeDateOverridden : 1;
} SCD_Struct_WD109;

typedef struct {
	id field1;
	id field2;
	id field3;
	id field4;
	id field5;
	id field6;
	id field7;
	id field8;
	id field9;
	int field10;
	short field11;
	int field12;
	short field13;
	int field14;
	short field15;
	int field16;
	short field17;
	int field18;
	int field19;
	char field20;
	int field21;
	int field22;
	int field23;
	unsigned short field24;
	unsigned short field25;
	unsigned short field26;
	id field27;
	id field28;
	id field29;
	unsigned field30 : 1;
	unsigned field31 : 1;
	unsigned field32 : 1;
	unsigned field33 : 1;
	unsigned field34 : 1;
	unsigned field35 : 1;
	unsigned field36 : 1;
	unsigned field37 : 1;
	unsigned field38 : 1;
	unsigned field39 : 1;
	unsigned field40 : 1;
	unsigned field41 : 1;
	unsigned field42 : 1;
	unsigned field43 : 1;
	unsigned field44 : 1;
	unsigned field45 : 1;
	unsigned field46 : 1;
	unsigned field47 : 1;
	unsigned field48 : 1;
	unsigned field49 : 1;
	unsigned field50 : 1;
	unsigned field51 : 1;
	unsigned field52 : 1;
	unsigned field53 : 1;
	unsigned field54 : 1;
	unsigned field55 : 1;
	unsigned field56 : 1;
	unsigned field57 : 1;
	unsigned field58 : 1;
	unsigned field59 : 1;
	unsigned field60 : 1;
	unsigned field61 : 1;
	unsigned field62 : 1;
	unsigned field63 : 1;
	unsigned field64 : 1;
} SCD_Struct_WD110;

typedef struct {
	WDStyle* baseStyle;
	unsigned short look;
	WDShading* shading;
	WDBorder* topBorder;
	WDBorder* leftBorder;
	WDBorder* bottomBorder;
	WDBorder* rightBorder;
	WDBorder* insideHorizontalBorder;
	WDBorder* insideVerticalBorder;
	int justification;
	int alignment;
	long long width;
	int widthType;
	short indent;
	int indentType;
	short cellSpacing;
	int cellSpacingType;
	int verticalAnchor;
	int horizontalAnchor;
	long long verticalPosition;
	long long horizontalPosition;
	long long leftDistanceFromText;
	long long topDistanceFromText;
	long long rightDistanceFromText;
	long long bottomDistanceFromText;
	int deleted;
	int edited;
	int formattingChanged;
	BOOL biDirectional;
	unsigned short indexToAuthorIDOfDeletion;
	unsigned short indexToAuthorIDOfEdit;
	unsigned short indexToAuthorIDOfFormattingChange;
	NSDate* deletionDate;
	NSDate* editDate;
	NSDate* formattingChangeDate;
	unsigned baseStyleOverridden : 1;
	BOOL lookOverridden;
	unsigned shadingOverridden : 1;
	unsigned topBorderOverridden : 1;
	unsigned leftBorderOverridden : 1;
	unsigned bottomBorderOverridden : 1;
	unsigned rightBorderOverridden : 1;
	unsigned insideHorizontalBorderOverridden : 1;
	unsigned insideVerticalBorderOverridden : 1;
	unsigned justificationOverridden : 1;
	unsigned alignmentOverridden : 1;
	unsigned widthOverridden : 1;
	unsigned widthTypeOverridden : 1;
	unsigned indentOverridden : 1;
	unsigned indentTypeOverridden : 1;
	unsigned cellSpacingOverridden : 1;
	unsigned cellSpacingTypeOverridden : 1;
	unsigned verticalAnchorOverridden : 1;
	unsigned horizontalAnchorOverridden : 1;
	unsigned verticalPositionOverridden : 1;
	unsigned horizontalPositionOverridden : 1;
	unsigned leftDistanceFromTextOverridden : 1;
	unsigned topDistanceFromTextOverridden : 1;
	unsigned rightDistanceFromTextOverridden : 1;
	unsigned bottomDistanceFromTextOverridden : 1;
	unsigned deletedOverridden : 1;
	unsigned editedOverridden : 1;
	unsigned formattingChangedOverridden : 1;
	unsigned biDirectionalOverridden : 1;
	unsigned indexToAuthorIDOfDeletionOverridden : 1;
	unsigned indexToAuthorIDOfEditOverridden : 1;
	unsigned indexToAuthorIDOfFormattingChangeOverridden : 1;
	unsigned deletionDateOverridden : 1;
	unsigned editDateOverridden : 1;
	unsigned formattingChangeDateOverridden : 1;
} SCD_Struct_WD111;

typedef struct {
	short widthBefore;
	int widthBeforeType;
	short widthAfter;
	int widthAfterType;
	long long height;
	int heightType;
	unsigned widthBeforeOverridden : 1;
	unsigned widthBeforeTypeOverridden : 1;
	unsigned widthAfterOverridden : 1;
	unsigned widthAfterTypeOverridden : 1;
	unsigned heightOverridden : 1;
	unsigned heightTypeOverridden : 1;
	unsigned header : 1;
	unsigned headerOverridden : 1;
} SCD_Struct_WD112;

typedef struct ChVector<long>* ChVector<long>Ref;

typedef struct {
	int field1;
	unsigned short field2;
	unsigned short field3;
	unsigned short field4;
	int field5;
	BOOL field6;
	BOOL field7;
	BOOL field8;
	BOOL field9;
	BOOL field10;
} SCD_Struct_WD114;

typedef struct __CFAttributedString* CFAttributedStringRef;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

