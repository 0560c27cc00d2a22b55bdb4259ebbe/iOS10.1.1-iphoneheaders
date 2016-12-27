/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:50 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <SpringBoardFoundation/SBFMobileKeyBagState.h>

@interface SBFMutableMobileKeyBagState : SBFMobileKeyBagState

@property (assign,nonatomic) long long lockState; 
@property (assign,nonatomic) double backOffTime; 
@property (assign,nonatomic) unsigned long long failedAttemptCount; 
@property (assign,nonatomic) BOOL permanentlyBlocked; 
@property (assign,nonatomic) BOOL shouldWipe; 
@property (assign,nonatomic) BOOL recoveryEnabled; 
@property (assign,nonatomic) BOOL recoveryRequired; 
@property (assign,nonatomic) BOOL recoveryPossible; 
@property (assign,nonatomic) long long escrowCount; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setFailedAttemptCount:(unsigned long long)arg1 ;
-(id)initWithMKBLockStateInfo:(id)arg1 ;
-(id)_mutableState;
-(void)setLockState:(long long)arg1 ;
-(void)setBackOffTime:(double)arg1 ;
-(void)setPermanentlyBlocked:(BOOL)arg1 ;
-(void)setShouldWipe:(BOOL)arg1 ;
-(void)setRecoveryRequired:(BOOL)arg1 ;
-(void)setRecoveryPossible:(BOOL)arg1 ;
-(void)setRecoveryEnabled:(BOOL)arg1 ;
-(void)setEscrowCount:(long long)arg1 ;
@end
