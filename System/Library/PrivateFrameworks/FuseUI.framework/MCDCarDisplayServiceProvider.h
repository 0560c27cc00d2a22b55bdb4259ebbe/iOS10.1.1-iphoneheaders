/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:04 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MCDCarDisplayServiceProvider <NSObject>
@required
-(void)reloadPlayer:(id)arg1 mediaQuery:(id)arg2 options:(id)arg3;
-(void)reloadPlayer:(id)arg1 radioStation:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4;
-(void)reloadPlayer:(id)arg1 radioMetadata:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4;
-(void)changeRepeatType:(long long)arg1;
-(void)changeShuffleType:(long long)arg1;

@end

