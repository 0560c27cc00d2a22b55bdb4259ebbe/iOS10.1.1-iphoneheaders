/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:07 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PAEFilterDefaultBase.h>

@interface PAEUnsharpMask : PAEFilterDefaultBase
-(id)properties;
-(id)initWithAPIManager:(id)arg1 ;
-(BOOL)addParameters;
-(BOOL)canThrowRenderOutput:(id)arg1 withInput:(id)arg2 withInfo:(SCD_Struct_PA46*)arg3 ;
-(BOOL)frameSetup:(SCD_Struct_PA46*)arg1 inputInfo:(SCD_Struct_Fx42)arg2 hardware:(BOOL*)arg3 software:(BOOL*)arg4 ;
-(id)dynamicPropertiesAtTime:(/*function pointer*/void**)arg1 withError:(id*)arg2 ;
@end

