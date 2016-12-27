/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:22 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface MFSimpleAnimationCoordinator : NSObject {

	BOOL _animated;
	NSMutableArray* _animations;
	NSMutableArray* _completions;

}

@property (nonatomic,retain) NSMutableArray * animations;                  //@synthesize animations=_animations - In the implementation block
@property (nonatomic,retain) NSMutableArray * completions;                 //@synthesize completions=_completions - In the implementation block
@property (assign,getter=isAnimated,nonatomic) BOOL animated;              //@synthesize animated=_animated - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setAnimations:(NSMutableArray *)arg1 ;
-(BOOL)isAnimated;
-(void)setAnimated:(BOOL)arg1 ;
-(NSMutableArray *)animations;
-(void)animateAlongsideAnimations:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initCoordinatorAnimated:(BOOL)arg1 ;
-(void)playAnimations;
-(void)playCompletions:(BOOL)arg1 ;
-(NSMutableArray *)completions;
-(void)setCompletions:(NSMutableArray *)arg1 ;
@end

