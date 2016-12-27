/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:49 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BWNodeOutputConsumer.h>

@class BWNodeInput, BWNodeOutput, BWPipelineStage, NSString;

@interface BWNodeConnection : NSObject <BWNodeOutputConsumer> {

	BWNodeInput* _input;
	BWNodeOutput* _output;
	BWPipelineStage* _pipelineStage;

}

@property (readonly) BWNodeInput * input; 
@property (readonly) BWNodeOutput * output; 
@property (readonly) BWPipelineStage * pipelineStage; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)_requirementsArrayStartingFromInput:(id)arg1 ;
+(id)_inputAndRequirementsDebugArrayStartingFromInput:(id)arg1 ;
-(void)dealloc;
-(BWNodeInput *)input;
-(BOOL)detach;
-(BOOL)attach;
-(void)consumeMessage:(id)arg1 fromOutput:(id)arg2 ;
-(id)initWithOutput:(id)arg1 input:(id)arg2 pipelineStage:(id)arg3 ;
-(BWPipelineStage *)pipelineStage;
-(BOOL)resolveCommonBufferFormat;
-(BWNodeOutput *)output;
@end

