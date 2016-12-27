/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:19 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableArray;

@interface MSVCLICommandInterpreter : NSObject {

	NSMutableDictionary* _commandToInvocationsMap;
	NSMutableArray* _retainedBlockHandlers;

}
-(id)init;
-(void)addHandlerToCommand:(id)arg1 withTarget:(id)arg2 action:(SEL)arg3 ;
-(void)addHandlerToCommand:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(BOOL)handlerExistsForCommand:(id)arg1 ;
-(BOOL)executeWithArgumentCount:(int)arg1 arguments:(const char**)arg2 ;
@end

