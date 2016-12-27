/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:52 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WebEditingDelegate <NSObject>
@optional
-(void)webViewDidChange:(id)arg1;
-(id)undoManagerForWebView:(id)arg1;
-(BOOL)webView:(id)arg1 shouldBeginEditingInDOMRange:(id)arg2;
-(BOOL)webView:(id)arg1 shouldEndEditingInDOMRange:(id)arg2;
-(BOOL)webView:(id)arg1 shouldInsertNode:(id)arg2 replacingDOMRange:(id)arg3 givenAction:(long long)arg4;
-(BOOL)webView:(id)arg1 shouldInsertText:(id)arg2 replacingDOMRange:(id)arg3 givenAction:(long long)arg4;
-(BOOL)webView:(id)arg1 shouldDeleteDOMRange:(id)arg2;
-(BOOL)webView:(id)arg1 shouldChangeSelectedDOMRange:(id)arg2 toDOMRange:(id)arg3 affinity:(int)arg4 stillSelecting:(BOOL)arg5;
-(BOOL)webView:(id)arg1 shouldApplyStyle:(id)arg2 toElementsInDOMRange:(id)arg3;
-(BOOL)webView:(id)arg1 shouldChangeTypingStyle:(id)arg2 toStyle:(id)arg3;
-(BOOL)webView:(id)arg1 doCommandBySelector:(SEL)arg2;
-(void)webViewDidBeginEditing:(id)arg1;
-(void)webViewDidEndEditing:(id)arg1;
-(void)webViewDidChangeTypingStyle:(id)arg1;
-(void)webViewDidChangeSelection:(id)arg1;

@end

