/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:13 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSCH3DGLHandle.h>

@class TSCH3DShaderHandle, TSCH3DShaderEffectsStates, NSMutableDictionary;

@interface TSCH3DShaderProgramHandle : TSCH3DGLHandle {

	TSCH3DShaderHandle* mVertexShader;
	TSCH3DShaderHandle* mFragmentShader;
	TSCH3DShaderEffectsStates* mCurrentEffectsStates;
	NSMutableDictionary* mUniformLocations;
	NSMutableDictionary* mAttributeLocations;

}

@property (nonatomic,readonly) TSCH3DShaderHandle * vertexShader; 
@property (nonatomic,readonly) TSCH3DShaderHandle * fragmentShader; 
@property (nonatomic,readonly) TSCH3DShaderEffectsStates * currentEffectsStates; 
@property (nonatomic,readonly) NSMutableDictionary * uniformLocations; 
@property (nonatomic,readonly) NSMutableDictionary * attributeLocations; 
-(id)initWithGLHandle:(unsigned)arg1 ;
-(void)destroyResourcesInContext:(id)arg1 ;
-(TSCH3DShaderEffectsStates *)currentEffectsStates;
-(NSMutableDictionary *)uniformLocations;
-(NSMutableDictionary *)attributeLocations;
-(void)dealloc;
-(TSCH3DShaderHandle *)vertexShader;
-(TSCH3DShaderHandle *)fragmentShader;
@end

