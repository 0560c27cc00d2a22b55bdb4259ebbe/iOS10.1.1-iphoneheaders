/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:19 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/AccessibilityBundles/VoiceOver.axuiservice/VoiceOver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AXUIService.h>
#import <libobjc.A.dylib/AXUIContentViewControllerDelegate.h>

@class VOTUICursorViewController, VOTUISwipeOrderViewController, VOTUIScreenCurtainViewController, VOTUIBrailleViewController, VOTUICaptionPanelViewController, VOTUIRotorViewController, NSString;

@interface VOTUIServer : NSObject <AXUIService, AXUIContentViewControllerDelegate> {

	VOTUICursorViewController* _cursorViewController;
	VOTUISwipeOrderViewController* _swipeOrderViewController;
	VOTUIScreenCurtainViewController* _screenCurtainViewController;
	VOTUIBrailleViewController* _brailleViewController;
	VOTUICaptionPanelViewController* _captionPanelViewController;
	VOTUIRotorViewController* _rotorViewController;
	NSString* _voiceOverWarningIdentifier;

}

@property (nonatomic,retain) VOTUICursorViewController * cursorViewController;                            //@synthesize cursorViewController=_cursorViewController - In the implementation block
@property (nonatomic,retain) VOTUISwipeOrderViewController * swipeOrderViewController;                    //@synthesize swipeOrderViewController=_swipeOrderViewController - In the implementation block
@property (nonatomic,retain) VOTUIScreenCurtainViewController * screenCurtainViewController;              //@synthesize screenCurtainViewController=_screenCurtainViewController - In the implementation block
@property (nonatomic,retain) VOTUIBrailleViewController * brailleViewController;                          //@synthesize brailleViewController=_brailleViewController - In the implementation block
@property (nonatomic,retain) VOTUICaptionPanelViewController * captionPanelViewController;                //@synthesize captionPanelViewController=_captionPanelViewController - In the implementation block
@property (nonatomic,retain) VOTUIRotorViewController * rotorViewController;                              //@synthesize rotorViewController=_rotorViewController - In the implementation block
@property (nonatomic,retain) NSString * voiceOverWarningIdentifier;                                       //@synthesize voiceOverWarningIdentifier=_voiceOverWarningIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setScreenCurtainViewController:(VOTUIScreenCurtainViewController *)arg1 ;
-(void)setVoiceOverWarningIdentifier:(NSString *)arg1 ;
-(NSString *)voiceOverWarningIdentifier;
-(void)setCursorViewController:(VOTUICursorViewController *)arg1 ;
-(void)_handleShowBrailleUIMessage:(id)arg1 ;
-(VOTUICaptionPanelViewController *)captionPanelViewController;
-(void)_handleShowVoiceOverWarning:(id)arg1 ;
-(void)setCaptionPanelViewController:(VOTUICaptionPanelViewController *)arg1 ;
-(void)_handleHideVoiceOverWarning:(id)arg1 ;
-(VOTUICursorViewController *)cursorViewController;
-(void)_handleSetCursorFrameMessage:(id)arg1 ;
-(void)_removeCursorViewController;
-(void)_removeCaptionPanelViewController;
-(void)_handleVoiceOverCaptionPanelEnabled:(id)arg1 ;
-(void)_toggleVoiceOverCaptionPanelViewController;
-(void)setSwipeOrderViewController:(VOTUISwipeOrderViewController *)arg1 ;
-(VOTUIBrailleViewController *)brailleViewController;
-(void)_removeScreenCurtainController;
-(void)setBrailleViewController:(VOTUIBrailleViewController *)arg1 ;
-(void)setRotorViewController:(VOTUIRotorViewController *)arg1 ;
-(VOTUISwipeOrderViewController *)swipeOrderViewController;
-(VOTUIScreenCurtainViewController *)screenCurtainViewController;
-(void)_removeRotorViewController;
-(void)_handleUpdateBrailleUIMessage:(id)arg1 ;
-(void)_handleUpdateVisualRotor:(id)arg1 ;
-(VOTUIRotorViewController *)rotorViewController;
-(void)_handleScreenCurtainEnabled:(BOOL)arg1 ;
-(void)_handleHideBrailleUIMessage:(id)arg1 ;
-(void)_removeBrailleViewController;
-(void)_removeSwipeOrderViewController;
-(void)_handleHighlightBrailleDotsMessage:(id)arg1 ;
-(void)_handleFlashBrailleInsertedTextMessage:(id)arg1 ;
-(void)_handleSetSwipeOrderFramesMessage:(id)arg1 ;
-(void)_addBrailleViewControllerWithOrientation:(long long)arg1 dotNumberPositions:(id)arg2 typingMode:(long long)arg3 ;
-(id)init;
-(void)dealloc;
-(double)desiredWindowLevelForContentViewController:(id)arg1 userInteractionEnabled:(BOOL)arg2 ;
-(BOOL)shouldPreventAutorotatingAllContentViewControllers;
-(id)processMessage:(id)arg1 withIdentifier:(unsigned long long)arg2 fromClientWithIdentifier:(id)arg3 error:(id*)arg4 ;
-(void)connectionWillBeInterruptedForClientWithIdentifier:(id)arg1 ;
@end

