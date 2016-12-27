/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:59 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoard/FrontBoard-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBProcessState : NSObject <BSDescriptionProviding, NSCopying> {

	int _pid;
	BOOL _running;
	BOOL _foreground;
	int _taskState;
	int _visibility;
	int _effectiveVisibility;

}

@property (assign,nonatomic) int pid;                                          //@synthesize pid=_pid - In the implementation block
@property (assign,getter=isRunning,nonatomic) BOOL running;                    //@synthesize running=_running - In the implementation block
@property (assign,getter=isForeground,nonatomic) BOOL foreground;              //@synthesize foreground=_foreground - In the implementation block
@property (assign,nonatomic) int taskState;                                    //@synthesize taskState=_taskState - In the implementation block
@property (assign,nonatomic) int visibility;                                   //@synthesize visibility=_visibility - In the implementation block
@property (assign,nonatomic) int effectiveVisibility;                          //@synthesize effectiveVisibility=_effectiveVisibility - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isRunning;
-(void)setVisibility:(int)arg1 ;
-(void)setPid:(int)arg1 ;
-(int)visibility;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(int)taskState;
-(void)setTaskState:(int)arg1 ;
-(void)setEffectiveVisibility:(int)arg1 ;
-(int)effectiveVisibility;
-(id)_descriptionForTaskState:(int)arg1 ;
-(id)_descriptionForVisibility:(int)arg1 ;
-(BOOL)isForeground;
-(id)initWithPid:(int)arg1 ;
-(int)pid;
-(void)setRunning:(BOOL)arg1 ;
-(void)setForeground:(BOOL)arg1 ;
@end

