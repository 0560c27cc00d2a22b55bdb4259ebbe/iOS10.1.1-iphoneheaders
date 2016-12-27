/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>

@class UIPopoverPresentationController, BrowserController, NSString;

@interface BrowserPopoverPresentationDelegate : NSObject <UIPopoverPresentationControllerDelegate> {

	UIPopoverPresentationController* _popoverPresentationController;
	BrowserController* _browserController;

}

@property (nonatomic,readonly) BrowserController * browserController;              //@synthesize browserController=_browserController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)attachDelegateToReloadOptionsPopoverPresentationController:(id)arg1 browserController:(id)arg2 ;
+(void)attachDelegateToReaderAppearancePopoverPresentationController:(id)arg1 browserController:(id)arg2 ;
+(BOOL)isPopoverPresentationControllerShowingFromNavigationBar:(id)arg1 ;
+(void)attachDelegateToPopoverPresentationController:(id)arg1 browserController:(id)arg2 presentingFromButtonIdentifier:(long long)arg3 ;
+(void)_attachDelegate:(id)arg1 toPopoverPresentationController:(id)arg2 ;
+(BOOL)_popoverPresentationController:(id)arg1 hasValidPresentedViewControllerWithDelegateClass:(Class)arg2 ;
-(BrowserController *)browserController;
-(void)updatePopoverPosition;
-(id)initWithPopoverPresentationController:(id)arg1 browserController:(id)arg2 ;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2 ;
-(id)presentationController:(id)arg1 viewControllerForAdaptivePresentationStyle:(long long)arg2 ;
-(id)sourceView;
-(CGRect)sourceRect;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg1 ;
-(void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(inout CGRect*)arg2 inView:(inout id*)arg3 ;
@end

