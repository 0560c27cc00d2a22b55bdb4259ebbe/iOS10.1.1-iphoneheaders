/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:52 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKMessageEntryViewDelegate <NSObject>
@optional
-(BOOL)getContainerWidth:(double*)arg1 offset:(double*)arg2;
-(void)sendCurrentLocationMessage:(id)arg1;

@required
-(void)messageEntryViewSendButtonHitWhileDisabled:(id)arg1;
-(void)messageEntryViewDidChange:(id)arg1;
-(double)messageEntryViewMaxHeight:(id)arg1;
-(BOOL)messageEntryViewShouldBeginEditing:(id)arg1;
-(CGSize*)messageEntryViewMaxShelfPluginViewSize:(id)arg1;
-(void)messageEntryViewDidBeginEditing:(id)arg1;
-(void)messageEntryViewDidEndEditing:(id)arg1;
-(BOOL)messageEntryView:(id)arg1 shouldInsertMediaObjects:(id)arg2;
-(void)messageEntryView:(id)arg1 didTapMediaObject:(id)arg2;
-(void)messageEntryViewRecordingDidChange:(id)arg1;
-(void)messageEntryViewSendButtonHit:(id)arg1;
-(void)messageEntryViewRaiseGestureAutoSend:(id)arg1;
-(void)messageEntryViewSendButtonLongPressBegan:(id)arg1;
-(void)messageEntryView:(id)arg1 sendButtonLongPressMoved:(CGPoint)arg2;
-(void)messageEntryView:(id)arg1 sendButtonLongPressEnded:(CGPoint)arg2;

@end

