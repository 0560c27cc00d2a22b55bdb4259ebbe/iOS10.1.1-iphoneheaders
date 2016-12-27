/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:32 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKPassDeleteHandler <NSObject>
@optional
-(void)setDeletionStatusHandler:(/*^block*/id)arg1 forPass:(id)arg2;
-(BOOL)isDeletionInProgressForPass:(id)arg1;

@required
-(BOOL)handleDeletePassRequestWithPass:(id)arg1 forViewController:(id)arg2;

@end

