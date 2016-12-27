/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSInvocation, MRRenderer, MCAction, MRLayer, NSMutableDictionary, NSString;

@interface MRAction : NSObject {

	NSInvocation* _invocation;
	/*^block*/id _block;
	MRRenderer* _renderer;
	MCAction* _mcAction;
	id _sender;
	MRLayer* _resolvedTarget;
	NSMutableDictionary* _states;
	double _time;
	id _specificObject;
	NSString* _targetPath;

}

@property (readonly) MCAction * mcAction;                               //@synthesize mcAction=_mcAction - In the implementation block
@property (nonatomic,retain) id sender;                                 //@synthesize sender=_sender - In the implementation block
@property (nonatomic,copy) NSString * targetPath;                       //@synthesize targetPath=_targetPath - In the implementation block
@property (nonatomic,retain) MRLayer * resolvedTarget;                  //@synthesize resolvedTarget=_resolvedTarget - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * states;              //@synthesize states=_states - In the implementation block
@property (assign,nonatomic) double time;                               //@synthesize time=_time - In the implementation block
@property (retain) id specificObject;                                   //@synthesize specificObject=_specificObject - In the implementation block
-(id)initWithSelector:(SEL)arg1 sender:(id)arg2 andTargetPath:(id)arg3 inRenderer:(id)arg4 ;
-(id)initWithBlock:(/*^block*/id)arg1 andSender:(id)arg2 ;
-(MRLayer *)resolvedTarget;
-(void)_resolveTargetPath:(id)arg1 ;
-(id)specificObject;
-(void)setResolvedTarget:(MRLayer *)arg1 ;
-(id)initWithAction:(id)arg1 andTarget:(id)arg2 ;
-(id)initWithAction:(id)arg1 inRenderer:(id)arg2 ;
-(MCAction *)mcAction;
-(void)setSpecificObject:(id)arg1 ;
-(NSString *)targetPath;
-(void)setTargetPath:(NSString *)arg1 ;
-(void)dealloc;
-(id)description;
-(id)sender;
-(double)invoke;
-(void)setSender:(id)arg1 ;
-(double)time;
-(void)setTime:(double)arg1 ;
-(void)setStates:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)states;
-(void)check;
@end

