/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:34 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, MTLRenderPassDepthAttachmentDescriptorInternal, MTLRenderPassStencilAttachmentDescriptorInternal;

typedef struct {
	BOOL field1;
	BOOL field2;
	unsigned long long field3;
	id field4;
	unsigned long long field5;
	unsigned long long field6;
	unsigned long long field7;
	unsigned long long field8;
	BOOL field9;
	float field10;
	float field11;
} SCD_Struct_MT0;

typedef struct {
	double field1;
	double field2;
	double field3;
	double field4;
	double field5;
	double field6;
} SCD_Struct_MT1;

typedef struct {
	unsigned long long field1;
	unsigned long long field2;
	unsigned long long field3;
	unsigned long long field4;
} SCD_Struct_MT2;

typedef struct {
	unsigned long long field1;
	unsigned long long field2;
	unsigned long long field3;
} SCD_Struct_MT3;

typedef struct __IOSurface* IOSurfaceRef;

typedef struct {
	unsigned field1 : 8;
	unsigned field2 : 24;
	unsigned field3;
	unsigned long long field4;
	unsigned long long field5;
} SCD_Struct_MT5;

typedef struct {
	SCD_Struct_MT3 field1;
	SCD_Struct_MT3 field2;
} SCD_Struct_MT6;

typedef struct {
	unsigned field1;
	unsigned field2;
	unsigned field3;
	unsigned field4;
	unsigned field5;
	unsigned field6;
	unsigned field7;
	unsigned field8;
	unsigned field9;
	unsigned field10;
	unsigned field11;
	unsigned field12;
	unsigned field13;
	unsigned field14;
	unsigned field15;
	unsigned field16;
	unsigned field17;
	unsigned field18;
	float field19;
	float field20;
	unsigned field21;
	unsigned field22;
	unsigned field23;
	unsigned field24;
	unsigned field25;
	unsigned field26;
	unsigned field27;
	unsigned field28;
	unsigned field29;
	unsigned field30;
	unsigned field31;
	unsigned field32;
	unsigned field33;
	unsigned field34;
	unsigned field35;
	unsigned field36;
	unsigned field37;
	unsigned field38;
	unsigned field39;
	unsigned field40;
	unsigned field41;
} SCD_Struct_MT7;

typedef struct {
	unsigned field1;
	unsigned field2;
	unsigned field3;
} SCD_Struct_MT8;

typedef struct {
	BOOL field1;
	unsigned long long field2;
	/*function pointer*/void* field3;
} SCD_Struct_MT9;

typedef struct {
	unsigned field1;
	unsigned field2;
} SCD_Struct_MT10;

typedef struct {
	unsigned long long field1;
	unsigned long long field2;
} SCD_Struct_MT11;

typedef struct _compressed_pair<__weak id **, std::__1::allocator<__weak id *> > {
	id __first_;
} compressed_pair<__weak id **, std::__1::allocator<__weak id *> >;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<__weak id> > {
	unsigned long long __first_;
} compressed_pair<unsigned long, std::__1::allocator<__weak id> >;

typedef struct _split_buffer<__weak id *, std::__1::allocator<__weak id *> > {
	id __first_;
	id __begin_;
	id __end_;
	compressed_pair<__weak id **, std::__1::allocator<__weak id *> > __end_cap_;
} split_buffer<__weak id *, std::__1::allocator<__weak id *> >;

typedef struct deque<__weak id, std::__1::allocator<__weak id> > {
	split_buffer<__weak id *, std::__1::allocator<__weak id *> > __map_;
	unsigned long long __start_;
	compressed_pair<unsigned long, std::__1::allocator<__weak id> > __size_;
} deque<__weak id, std::__1::allocator<__weak id> >;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct {
	BOOL isValid;
	BOOL hasBeenUsed;
	unsigned long long type;
	id object;
	unsigned long long baseLevel;
	unsigned long long bufferLength;
	unsigned long long bufferOffset;
	unsigned long long threadgroupMemoryLength;
	BOOL hasLodClamp;
	float lodMinClamp;
	float lodMaxClamp;
} SCD_Struct_MT17;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *> > {
	unsigned long long __first_;
} compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *> >;

typedef struct _compressed_pair<unsigned long, std::__1::__unordered_map_hasher<MTLPixelFormat, std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, std::__1::hash<unsigned long long>, true> > {
	unsigned long long __first_;
} compressed_pair<unsigned long, std::__1::__unordered_map_hasher<MTLPixelFormat, std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, std::__1::hash<unsigned long long>, true> >;

typedef struct _compressed_pair<float, std::__1::__unordered_map_equal<MTLPixelFormat, std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, std::__1::equal_to<MTLPixelFormat>, true> > {
	float __first_;
} compressed_pair<float, std::__1::__unordered_map_equal<MTLPixelFormat, std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, std::__1::equal_to<MTLPixelFormat>, true> >;

typedef struct _hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *> {
	__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> __next_;
} hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *>;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> > > {
	hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *> __first_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> > >;

typedef struct _bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *> > {
	compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *> > __data_;
} bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *> >;

typedef struct _compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *> > > {
	__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> __first_;
	bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *> > __second_;
} compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *> > >;

typedef struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *> > > {
	compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *> > > __ptr_;
} unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *> > >;

typedef struct _hash_table<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, std::__1::__unordered_map_hasher<MTLPixelFormat, std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<MTLPixelFormat, std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, std::__1::equal_to<MTLPixelFormat>, true>, std::__1::allocator<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution> > > {
	unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *> > > __bucket_list_;
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> > > __p1_;
	compressed_pair<unsigned long, std::__1::__unordered_map_hasher<MTLPixelFormat, std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, std::__1::hash<unsigned long long>, true> > __p2_;
	compressed_pair<float, std::__1::__unordered_map_equal<MTLPixelFormat, std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, std::__1::equal_to<MTLPixelFormat>, true> > __p3_;
} hash_table<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, std::__1::__unordered_map_hasher<MTLPixelFormat, std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<MTLPixelFormat, std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, std::__1::equal_to<MTLPixelFormat>, true>, std::__1::allocator<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution> > >;

typedef struct unordered_map<MTLPixelFormat, MTLTelemetryRenderTargetDistribution, std::__1::hash<unsigned long long>, std::__1::equal_to<MTLPixelFormat>, std::__1::allocator<std::__1::pair<const MTLPixelFormat, MTLTelemetryRenderTargetDistribution> > > {
	hash_table<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, std::__1::__unordered_map_hasher<MTLPixelFormat, std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<MTLPixelFormat, std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, std::__1::equal_to<MTLPixelFormat>, true>, std::__1::allocator<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution> > > __table_;
} unordered_map<MTLPixelFormat, MTLTelemetryRenderTargetDistribution, std::__1::hash<unsigned long long>, std::__1::equal_to<MTLPixelFormat>, std::__1::allocator<std::__1::pair<const MTLPixelFormat, MTLTelemetryRenderTargetDistribution> > >;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> *> > {
	unsigned long long __first_;
} compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> *> >;

typedef struct _compressed_pair<unsigned long, std::__1::__unordered_map_hasher<MTLPixelFormat, std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, std::__1::hash<unsigned long long>, true> > {
	unsigned long long __first_;
} compressed_pair<unsigned long, std::__1::__unordered_map_hasher<MTLPixelFormat, std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, std::__1::hash<unsigned long long>, true> >;

typedef struct _compressed_pair<float, std::__1::__unordered_map_equal<MTLPixelFormat, std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, std::__1::equal_to<MTLPixelFormat>, true> > {
	float __first_;
} compressed_pair<float, std::__1::__unordered_map_equal<MTLPixelFormat, std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, std::__1::equal_to<MTLPixelFormat>, true> >;

typedef struct _hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> *> {
	__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> __next_;
} hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> *>;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> > > {
	hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> *> __first_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> > >;

typedef struct _bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> *> > {
	compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> *> > __data_;
} bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> *> >;

typedef struct _compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> *> > > {
	__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> __first_;
	bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> *> > __second_;
} compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> *> > >;

typedef struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> *> > > {
	compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> *> > > __ptr_;
} unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> *> > >;

typedef struct _hash_table<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, std::__1::__unordered_map_hasher<MTLPixelFormat, std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<MTLPixelFormat, std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, std::__1::equal_to<MTLPixelFormat>, true>, std::__1::allocator<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution> > > {
	unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> *> > > __bucket_list_;
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> > > __p1_;
	compressed_pair<unsigned long, std::__1::__unordered_map_hasher<MTLPixelFormat, std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, std::__1::hash<unsigned long long>, true> > __p2_;
	compressed_pair<float, std::__1::__unordered_map_equal<MTLPixelFormat, std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, std::__1::equal_to<MTLPixelFormat>, true> > __p3_;
} hash_table<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, std::__1::__unordered_map_hasher<MTLPixelFormat, std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<MTLPixelFormat, std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, std::__1::equal_to<MTLPixelFormat>, true>, std::__1::allocator<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution> > >;

typedef struct unordered_map<MTLPixelFormat, MTLTelemetryTextureDistribution, std::__1::hash<unsigned long long>, std::__1::equal_to<MTLPixelFormat>, std::__1::allocator<std::__1::pair<const MTLPixelFormat, MTLTelemetryTextureDistribution> > > {
	hash_table<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, std::__1::__unordered_map_hasher<MTLPixelFormat, std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<MTLPixelFormat, std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, std::__1::equal_to<MTLPixelFormat>, true>, std::__1::allocator<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution> > > __table_;
} unordered_map<MTLPixelFormat, MTLTelemetryTextureDistribution, std::__1::hash<unsigned long long>, std::__1::equal_to<MTLPixelFormat>, std::__1::allocator<std::__1::pair<const MTLPixelFormat, MTLTelemetryTextureDistribution> > >;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *> > {
	unsigned long long __first_;
} compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *> >;

typedef struct _compressed_pair<unsigned long, std::__1::__unordered_map_hasher<MTLPixelFormat, std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, std::__1::hash<unsigned long long>, true> > {
	unsigned long long __first_;
} compressed_pair<unsigned long, std::__1::__unordered_map_hasher<MTLPixelFormat, std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, std::__1::hash<unsigned long long>, true> >;

typedef struct _compressed_pair<float, std::__1::__unordered_map_equal<MTLPixelFormat, std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, std::__1::equal_to<MTLPixelFormat>, true> > {
	float __first_;
} compressed_pair<float, std::__1::__unordered_map_equal<MTLPixelFormat, std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, std::__1::equal_to<MTLPixelFormat>, true> >;

typedef struct _hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *> {
	__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> __next_;
} hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *>;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> > > {
	hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *> __first_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> > >;

typedef struct _bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *> > {
	compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *> > __data_;
} bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *> >;

typedef struct _compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *> > > {
	__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> __first_;
	bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *> > __second_;
} compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *> > >;

typedef struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *> > > {
	compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *> > > __ptr_;
} unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *> > >;

typedef struct _hash_table<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, std::__1::__unordered_map_hasher<MTLPixelFormat, std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<MTLPixelFormat, std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, std::__1::equal_to<MTLPixelFormat>, true>, std::__1::allocator<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution> > > {
	unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *> > > __bucket_list_;
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> > > __p1_;
	compressed_pair<unsigned long, std::__1::__unordered_map_hasher<MTLPixelFormat, std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, std::__1::hash<unsigned long long>, true> > __p2_;
	compressed_pair<float, std::__1::__unordered_map_equal<MTLPixelFormat, std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, std::__1::equal_to<MTLPixelFormat>, true> > __p3_;
} hash_table<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, std::__1::__unordered_map_hasher<MTLPixelFormat, std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<MTLPixelFormat, std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, std::__1::equal_to<MTLPixelFormat>, true>, std::__1::allocator<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution> > >;

typedef struct unordered_map<MTLPixelFormat, MTLTelemetryBlitDistribution, std::__1::hash<unsigned long long>, std::__1::equal_to<MTLPixelFormat>, std::__1::allocator<std::__1::pair<const MTLPixelFormat, MTLTelemetryBlitDistribution> > > {
	hash_table<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, std::__1::__unordered_map_hasher<MTLPixelFormat, std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<MTLPixelFormat, std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, std::__1::equal_to<MTLPixelFormat>, true>, std::__1::allocator<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution> > > __table_;
} unordered_map<MTLPixelFormat, MTLTelemetryBlitDistribution, std::__1::hash<unsigned long long>, std::__1::equal_to<MTLPixelFormat>, std::__1::allocator<std::__1::pair<const MTLPixelFormat, MTLTelemetryBlitDistribution> > >;

typedef struct mach_timebase_info {
	unsigned numer;
	unsigned denom;
} mach_timebase_info;

typedef struct ResourceTrackingDeferredAttachments {
	NSMutableArray* colorAttachments;
	MTLRenderPassDepthAttachmentDescriptorInternal* depthAttachment;
	MTLRenderPassStencilAttachmentDescriptorInternal* stencilAttachment;
} ResourceTrackingDeferredAttachments;

typedef struct {
	unsigned long long x;
	unsigned long long y;
	unsigned long long width;
	unsigned long long height;
} SCD_Struct_MT50;

typedef struct {
	unsigned maxColorAttachments;
	unsigned maxVertexAttributes;
	unsigned maxVertexBuffers;
	unsigned maxVertexTextures;
	unsigned maxVertexSamplers;
	unsigned maxVertexInlineDataSize;
	unsigned maxInterpolants;
	unsigned maxFragmentBuffers;
	unsigned maxFragmentTextures;
	unsigned maxFragmentSamplers;
	unsigned maxFragmentInlineDataSize;
	unsigned maxComputeBuffers;
	unsigned maxComputeTextures;
	unsigned maxComputeSamplers;
	unsigned maxComputeInlineDataSize;
	unsigned maxComputeLocalMemorySizes;
	unsigned maxTotalComputeThreadsPerThreadgroup;
	unsigned maxComputeThreadgroupMemory;
	float maxLineWidth;
	float maxPointSize;
	unsigned maxVisibilityQueryOffset;
	unsigned maxBufferLength;
	unsigned minConstantBufferAlignmentBytes;
	unsigned minBufferNoCopyAlignmentBytes;
	unsigned maxTextureWidth1D;
	unsigned maxTextureWidth2D;
	unsigned maxTextureHeight2D;
	unsigned maxTextureWidth3D;
	unsigned maxTextureHeight3D;
	unsigned maxTextureDepth3D;
	unsigned maxTextureDimensionCube;
	unsigned maxTextureLayers;
	unsigned linearTextureAlignmentBytes;
	unsigned iosurfaceTextureAlignmentBytes;
	unsigned iosurfaceReadOnlyTextureAlignmentBytes;
	unsigned deviceLinearTextureAlignmentBytes;
	unsigned deviceLinearReadOnlyTextureAlignmentBytes;
	unsigned maxFunctionConstantIndices;
	unsigned maxComputeThreadgroupMemoryAlignmentBytes;
	unsigned maxInterpolatedComponents;
	unsigned maxFramebufferStorageBits;
} SCD_Struct_MT51;

typedef struct {
	double originX;
	double originY;
	double width;
	double height;
	double znear;
	double zfar;
} SCD_Struct_MT52;

typedef struct _NSZone* NSZoneRef;

typedef struct MTLTelemetryCommandBufferDistributionRec* MTLTelemetryCommandBufferDistributionRecRef;

typedef struct MTLTelemetryKernelStateRec {
	int pbAlloc;
	int spmRenderCount;
	int tiledSceneBytes;
	int renderCount;
} MTLTelemetryKernelStateRec;

