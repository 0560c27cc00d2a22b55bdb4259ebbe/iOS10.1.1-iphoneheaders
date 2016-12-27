/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SBLockScreenActionContext;

@interface SBDashBoardAction : NSObject {

	long long _type;
	SBLockScreenActionContext* _context;

}

@property (assign,nonatomic) long long type;                                   //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) SBLockScreenActionContext * context;              //@synthesize context=_context - In the implementation block
+(id)actionWithContext:(id)arg1 ;
+(id)actionWithType:(long long)arg1 ;
-(id)description;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(SBLockScreenActionContext *)context;
-(void)setContext:(SBLockScreenActionContext *)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
@end

