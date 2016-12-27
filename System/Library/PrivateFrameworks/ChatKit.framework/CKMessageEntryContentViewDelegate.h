/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:52 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKMessageEntryContentViewDelegate <UIScrollViewDelegate>
@required
-(void)messageEntryContentViewDidChange:(id)arg1;
-(BOOL)messageEntryContentViewShouldBeginEditing:(id)arg1;
-(void)messageEntryContentViewDidBeginEditing:(id)arg1;
-(void)messageEntryContentViewDidEndEditing:(id)arg1;
-(BOOL)messageEntryContentView:(id)arg1 shouldInsertMediaObjects:(id)arg2;
-(CGSize*)messageEntryContentViewMaxShelfPluginViewSize:(id)arg1;
-(void)messageEntryContentView:(id)arg1 didTapMediaObject:(id)arg2;
-(void)messageEntryContentViewWasTapped:(id)arg1 isLongPress:(BOOL)arg2;
-(void)messageEntryContentView:(id)arg1 didPasteURL:(id)arg2;
-(void)messageEntryContentViewDidTapHandwritingKey:(id)arg1;
-(void)messageEntryContentViewCancelWasTapped:(id)arg1 shelfPluginPayload:(id)arg2;

@end

