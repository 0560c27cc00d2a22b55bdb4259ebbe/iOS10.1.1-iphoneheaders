/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:07 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID;

typedef struct CGImage* CGImageRef;

typedef struct _NSZone* NSZoneRef;

typedef struct archive* archiveRef;

typedef struct {
	long long field1;
	int field2;
	unsigned field3;
	long long field4;
} SCD_Struct_IC3;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGImageSource* CGImageSourceRef;

typedef struct opaque_pthread_rwlock_t {
	long long __sig;
	char __opaque[192];
} opaque_pthread_rwlock_t;

typedef struct _compressed_pair<TopoSubstring **, std::__1::allocator<TopoSubstring *> > {
	TopoSubstring __first_;
} compressed_pair<TopoSubstring **, std::__1::allocator<TopoSubstring *> >;

typedef struct vector<TopoSubstring *, std::__1::allocator<TopoSubstring *> > {
	TopoSubstring __begin_;
	TopoSubstring __end_;
	compressed_pair<TopoSubstring **, std::__1::allocator<TopoSubstring *> > __end_cap_;
} vector<TopoSubstring *, std::__1::allocator<TopoSubstring *> >;

typedef struct _compressed_pair<std::__1::pair<TopoID, TopoID> *, std::__1::allocator<std::__1::pair<TopoID, TopoID> > > {
	pair<TopoID, TopoID> __first_;
} compressed_pair<std::__1::pair<TopoID, TopoID> *, std::__1::allocator<std::__1::pair<TopoID, TopoID> > >;

typedef struct vector<std::__1::pair<TopoID, TopoID>, std::__1::allocator<std::__1::pair<TopoID, TopoID> > > {
	pair<TopoID, TopoID> __begin_;
	pair<TopoID, TopoID> __end_;
	compressed_pair<std::__1::pair<TopoID, TopoID> *, std::__1::allocator<std::__1::pair<TopoID, TopoID> > > __end_cap_;
} vector<std::__1::pair<TopoID, TopoID>, std::__1::allocator<std::__1::pair<TopoID, TopoID> > >;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct _compressed_pair<ICDrawingInputPoint *, std::__1::allocator<ICDrawingInputPoint> > {
	/*function pointer*/void* __first_;
} compressed_pair<ICDrawingInputPoint *, std::__1::allocator<ICDrawingInputPoint> >;

typedef struct vector<ICDrawingInputPoint, std::__1::allocator<ICDrawingInputPoint> > {
	/*function pointer*/void* __begin_;
	/*function pointer*/void* __end_;
	compressed_pair<ICDrawingInputPoint *, std::__1::allocator<ICDrawingInputPoint> > __end_cap_;
} vector<ICDrawingInputPoint, std::__1::allocator<ICDrawingInputPoint> >;

typedef struct CGAffineTransform {
	double a;
	double b;
	double c;
	double d;
	double tx;
	double ty;
} CGAffineTransform;

typedef struct {
	CGPoint field1;
	double field2;
	double field3;
	double field4;
	double field5;
	double field6;
	double field7;
} SCD_Struct_IC17;

typedef struct {
	CGPoint field1;
	double field2;
	double field3;
	double field4;
	double field5;
	double field6;
	BOOL field7;
	long long field8;
	double field9;
	BOOL field10;
} SCD_Struct_IC18;

typedef struct {
	double field1;
	double field2;
	double field3;
} SCD_Struct_IC19;

typedef struct _compressed_pair<ICDrawingOutputPoint *, std::__1::allocator<ICDrawingOutputPoint> > {
	/*function pointer*/void* __first_;
} compressed_pair<ICDrawingOutputPoint *, std::__1::allocator<ICDrawingOutputPoint> >;

typedef struct vector<ICDrawingOutputPoint, std::__1::allocator<ICDrawingOutputPoint> > {
	/*function pointer*/void* __begin_;
	/*function pointer*/void* __end_;
	compressed_pair<ICDrawingOutputPoint *, std::__1::allocator<ICDrawingOutputPoint> > __end_cap_;
} vector<ICDrawingOutputPoint, std::__1::allocator<ICDrawingOutputPoint> >;

typedef struct CGColor* CGColorRef;

typedef struct {
	double baseAlpha;
	double blendAlpha;
	double targetMultiple;
} SCD_Struct_IC23;

typedef struct ICDrawingCommandID {
	unsigned clock;
	NSUUID* replicaUUID;
	unsigned subclock;
} ICDrawingCommandID;

typedef struct {
	CGPoint point;
	double radius;
	double opacity;
	double azimuth;
	double edgeWidth;
	double aspectRatio;
	double timestamp;
} SCD_Struct_IC25;

typedef struct TopoID {
	NSUUID* replicaID;
	unsigned clock;
} TopoID;

typedef struct {
	double field1;
	double field2;
	double field3;
	double field4;
} SCD_Struct_IC27;

typedef struct vector<_NSRange, std::__1::allocator<_NSRange> >* vector<_NSRange, std::__1::allocator<_NSRange> >Ref;

