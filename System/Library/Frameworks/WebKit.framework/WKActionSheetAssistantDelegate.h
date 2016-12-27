/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:21 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WKActionSheetAssistantDelegate <NSObject>
@optional
-(void)updatePositionInformationForActionSheetAssistant:(id)arg1;
-(void)actionSheetAssistant:(id)arg1 willStartInteractionWithElement:(id)arg2;
-(BOOL)actionSheetAssistant:(id)arg1 showCustomSheetForElement:(id)arg2;
-(id)dataDetectionContextForActionSheetAssistant:(id)arg1;
-(id)selectedTextForActionSheetAssistant:(id)arg1;
-(void)actionSheetAssistantDidStopInteraction:(id)arg1;

@required
-(void)actionSheetAssistant:(id)arg1 performAction:(int)arg2;
-(void)actionSheetAssistant:(id)arg1 openElementAtLocation:(CGPoint)arg2;
-(void)actionSheetAssistant:(id)arg1 shareElementWithURL:(id)arg2 rect:(CGRect)arg3;
-(const InteractionInformationAtPosition*)positionInformationForActionSheetAssistant:(id)arg1;
-(RetainPtr<NSArray>*)actionSheetAssistant:(id)arg1 decideActionsForElement:(id)arg2 defaultActions:(RetainPtr<NSArray>*)arg3;
-(BOOL)actionSheetAssistant:(id)arg1 shouldIncludeAppLinkActionsForElement:(id)arg2;

@end
