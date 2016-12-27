/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:10 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Symbolication/Symbolication-Structs.h>
@class NSString, NSMutableArray, NSMutableDictionary;

@interface VMUClassInfo : NSObject {

	unsigned long long _remoteIsa;
	unsigned _remotePointerSize;
	unsigned _ivarCount;
	unsigned _superclassOffset;
	unsigned _instanceSize;
	unsigned _ro_flags;
	unsigned _rw_flags;
	unsigned _defaultScanType;
	id* _localIvarList;
	unsigned _remoteType;
	NSString* _remoteClassName;
	NSString* _displayName;
	NSString* _remoteBinaryPath;
	VMUClassInfo* _superclassLayout;
	VMUClassInfo* _genericLayout;
	NSMutableArray* _variantEvaluators;
	NSMutableArray* _variantActions;
	NSMutableDictionary* _variantCache;
	const char* _weakLayout;
	const char* _strongLayout;
	char _hasSpecificLayout;
	char _hasVariantLayout;

}

@property (nonatomic,readonly) unsigned defaultScanType; 
@property (nonatomic,readonly) BOOL hasSpecificLayout; 
@property (nonatomic,readonly) BOOL hasVariantLayout; 
@property (nonatomic,readonly) unsigned pointerSize;                  //@synthesize remotePointerSize=_remotePointerSize - In the implementation block
@property (readonly) NSString * typeName; 
@property (readonly) NSString * className;                            //@synthesize remoteClassName=_remoteClassName - In the implementation block
@property (readonly) NSString * displayName; 
@property (readonly) NSString * binaryName; 
@property (readonly) NSString * binaryPath;                           //@synthesize remoteBinaryPath=_remoteBinaryPath - In the implementation block
@property (readonly) NSString * fullIvarDescription; 
@property (readonly) NSString * shortIvarDescription; 
@property (readonly) VMUClassInfo * superclassInfo;                   //@synthesize superclassLayout=_superclassLayout - In the implementation block
@property (readonly) VMUClassInfo * genericInfo; 
@property (readonly) int infoType; 
@property (readonly) unsigned long long remoteIsa;                    //@synthesize remoteIsa=_remoteIsa - In the implementation block
@property (readonly) unsigned instanceSize;                           //@synthesize instanceSize=_instanceSize - In the implementation block
@property (readonly) BOOL isARR; 
@property (readonly) BOOL isRealized; 
@property (readonly) BOOL isMetaClass; 
@property (readonly) BOOL isRootClass; 
@property (readonly) BOOL hasCppConstructorOrDestructor; 
+(void)initialize;
+(id)classInfoWithClassName:(id)arg1 binaryPath:(id)arg2 type:(int)arg3 ;
+(void)enableTestingVersion;
+(void)disableTestingVersion;
+(id)_genericBlockByrefInfo;
+(id)descriptionForTypeEncoding:(const char*)arg1 ivarName:(const char*)arg2 ;
+(unsigned long long)sizeofClassStructure:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(id)type;
-(id)mutableCopy;
-(NSString *)className;
-(NSString *)displayName;
-(int)infoType;
-(void)_setDisplayName:(id)arg1 ;
-(NSString *)binaryName;
-(NSString *)binaryPath;
-(BOOL)isARR;
-(unsigned)pointerSize;
-(id)firstFieldWithName:(id)arg1 ;
-(id)initWithClassName:(id)arg1 binaryPath:(id)arg2 type:(int)arg3 ;
-(void)_processARRLayout:(const char*)arg1 scanType:(unsigned)arg2 ;
-(void)_demangleClassName;
-(BOOL)hasVariantLayout;
-(BOOL)hasSpecificLayout;
-(id)_initWithClass:(unsigned long long)arg1 realizedOnly:(BOOL)arg2 infoMap:(id)arg3 symbolicator:(CSTypeRef)arg4 type:(int)arg5 swiftFieldMetadataContext:(libSwiftRemoteMirrorWrapper*)arg6 memoryReader:(/*^block*/id)arg7 ;
-(BOOL)isRealized;
-(void)_setClassNameWithAddress:(unsigned long long)arg1 reader:(/*^block*/id)arg2 ;
-(void)_parseIvarsAndLayouts;
-(BOOL)isRootClass;
-(unsigned)instanceSize;
-(void)_setBinaryPath:(id)arg1 ;
-(VMUClassInfo *)superclassInfo;
-(void)_freeLocalIvarList;
-(id)_copyWithInstanceSize:(unsigned)arg1 superclassOffset:(unsigned)arg2 asVariant:(BOOL)arg3 mutable:(BOOL)arg4 ;
-(void)serializeWithClassMap:(id)arg1 simpleSerializer:(id)arg2 version:(unsigned)arg3 ;
-(id)initWithSerializer:(id)arg1 classMap:(id)arg2 version:(unsigned)arg3 ;
-(unsigned long long)remoteIsa;
-(BOOL)hasCppConstructorOrDestructor;
-(void)_logDescriptionWithSuperclasses:(BOOL)arg1 indentation:(int)arg2 toLogger:(/*^block*/id)arg3 ;
-(id)_ivarDescription:(unsigned)arg1 withSpacing:(unsigned)arg2 ;
-(void)enumerateSublayoutsForSize:(unsigned)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)instanceSpecificInfoForObject:(unsigned long long)arg1 ofSize:(unsigned)arg2 memoryReader:(/*^block*/id)arg3 ;
-(void)_applyExtendedLayout:(const char*)arg1 withSize:(unsigned)arg2 ;
-(void)enumerateAllFieldsWithBlock:(/*^block*/id)arg1 ;
-(unsigned)_totalIvarCount;
-(void)enumerateTypeFieldsWithBlock:(/*^block*/id)arg1 ;
-(void)enumerateScanningLocationsForSize:(unsigned)arg1 withBlock:(/*^block*/id)arg2 ;
-(NSString *)fullIvarDescription;
-(void)_setSuperclassInfo:(id)arg1 ;
-(void)_setDefaultScanType:(unsigned)arg1 ;
-(unsigned)defaultScanType;
-(id)initWithClosureContext:(unsigned long long)arg1 typeInfo:(swift_typeinfo)arg2 infoMap:(id)arg3 swiftFieldMetadataContext:(libSwiftRemoteMirrorWrapper*)arg4 ;
-(id)initWithClass:(unsigned long long)arg1 infoMap:(id)arg2 symbolicator:(CSTypeRef)arg3 type:(int)arg4 swiftFieldMetadataContext:(libSwiftRemoteMirrorWrapper*)arg5 memoryReader:(/*^block*/id)arg6 ;
-(id)initWithRealizedClass:(unsigned long long)arg1 infoMap:(id)arg2 symbolicator:(CSTypeRef)arg3 type:(int)arg4 swiftFieldMetadataContext:(libSwiftRemoteMirrorWrapper*)arg5 memoryReader:(/*^block*/id)arg6 ;
-(void)enumerateStoredEntriesForObject:(unsigned long long)arg1 ofSize:(unsigned)arg2 externalValues:(id)arg3 block:(/*^block*/id)arg4 ;
-(void)enumerateExternalValuesFromObject:(unsigned long long)arg1 withSize:(unsigned)arg2 block:(/*^block*/id)arg3 ;
-(VMUClassInfo *)genericInfo;
-(id)fieldAtOrBeforeOffset:(unsigned)arg1 ;
-(void)_replaceField:(id)arg1 withFields:(id)arg2 ;
-(void)_setFields:(id)arg1 ;
-(void)_addVariantAction:(/*^block*/id)arg1 withEvaluator:(/*^block*/id)arg2 ;
-(void)_setIsa:(unsigned long long)arg1 ;
-(NSString *)shortIvarDescription;
-(id)scanDescriptionWithSize:(unsigned)arg1 ;
-(BOOL)isMetaClass;
-(NSString *)typeName;
@end

