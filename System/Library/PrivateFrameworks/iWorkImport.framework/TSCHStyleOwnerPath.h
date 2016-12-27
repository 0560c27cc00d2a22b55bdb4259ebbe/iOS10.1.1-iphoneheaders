/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:11 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface TSCHStyleOwnerPath : NSObject <NSCopying> {

	NSArray* mUuids;

}

@property (nonatomic,readonly) NSArray * uuids; 
+(id)instanceWithArchive:(const StyleOwnerPath*)arg1 unarchiver:(id)arg2 ;
+(id)verifiedUUIDs:(id)arg1 ;
+(id)styleOwnerPathWithUUIDs:(id)arg1 ;
+(id)styleOwnerPathForStyleOwner:(id)arg1 ;
+(unsigned char)styleOwnerPathTypeForStyleOwner:(id)arg1 ;
+(id)styleOwnerPathForSemanticTag:(id)arg1 ofChart:(id)arg2 ;
-(void)didInitFromSOS;
-(void)saveToArchive:(StyleOwnerPath*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const StyleOwnerPath*)arg1 unarchiver:(id)arg2 ;
-(id)initWithUUIDs:(id)arg1 ;
-(id)TSUUUIDPath;
-(id)pathByPrefixingWithUUIDs:(id)arg1 ;
-(Class)genericPropertyMapClass;
-(unsigned char)styleOwnerPathType;
-(int)styleOwnerType;
-(id)p_createUUIDDecoder;
-(id)p_axisStyleOwnerForChart:(id)arg1 ;
-(id)p_seriesStyleOwnerForChart:(id)arg1 ;
-(id)p_referenceLineStyleOwnerForChart:(id)arg1 ;
-(id)styleOwnerForChart:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)uuids;
@end

