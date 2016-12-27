/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:11 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TSCH3DUniformArrayShaderVariables;

@interface TSCH3DLightUniformArrayShaderVariables : NSObject {

	TSCH3DUniformArrayShaderVariables* mVariables;

}
-(void)initializeArrayVariables;
-(unsigned long long)arraySize;
-(void)addUniformsToShaderProgram:(id)arg1 size:(unsigned long long)arg2 ;
-(id)variableAtIndex:(unsigned long long)arg1 name:(id)arg2 ;
-(void)initializePrefix:(id)arg1 ;
-(void)dealloc;
@end

