/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:13 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DTexturesMaterial.h>

@interface TSCH3DModulateMaterial : TSCH3DTexturesMaterial
+(id)instanceWithArchive:(const Chart3DModulateMaterialArchive*)arg1 unarchiver:(id)arg2 ;
-(void)saveToArchive:(Chart3DModulateMaterialArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const Chart3DModulateMaterialArchive*)arg1 unarchiver:(id)arg2 ;
-(MaterialShaderVariables)defaultShaderVariables;
@end

