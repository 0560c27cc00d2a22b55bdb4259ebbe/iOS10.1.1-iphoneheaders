/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:39 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilityBaseListController.h>

@protocol AXPronunciationVoiceListControllerDelegate;
@class NSMutableSet;

@interface AXPronunciationVoiceListController : AccessibilityBaseListController {

	id<AXPronunciationVoiceListControllerDelegate> _delegate;
	NSMutableSet* _voiceIds;

}

@property (nonatomic,retain) NSMutableSet * voiceIds;                                              //@synthesize voiceIds=_voiceIds - In the implementation block
@property (assign,nonatomic) id<AXPronunciationVoiceListControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<AXPronunciationVoiceListControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id<AXPronunciationVoiceListControllerDelegate>)delegate;
-(void)setVoiceIds:(NSMutableSet *)arg1 ;
-(NSMutableSet *)voiceIds;
-(id)specifiers;
@end

