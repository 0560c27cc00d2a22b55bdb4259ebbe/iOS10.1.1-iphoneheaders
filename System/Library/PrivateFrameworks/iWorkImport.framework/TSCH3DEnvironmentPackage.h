/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface TSCH3DEnvironmentPackage : NSObject <NSCopying> {

	NSArray* _materials;

}
+(id)instanceWithArchive:(const Chart3DEnvironmentPackageArchive*)arg1 unarchiver:(id)arg2 ;
-(void)didInitFromSOS;
-(void)saveToArchive:(Chart3DEnvironmentPackageArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const Chart3DEnvironmentPackageArchive*)arg1 unarchiver:(id)arg2 ;
-(void)addMaterial:(id)arg1 ;
-(id)materialEnumerator;
-(BOOL)hasCompleteData;
-(void)affect:(id)arg1 states:(id)arg2 scene:(id)arg3 texturePool:(id)arg4 ;
-(unsigned long long)materialCount;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

