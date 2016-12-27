/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:42 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEventEditItem.h>
#import <libobjc.A.dylib/EKEventAttachmentCellControllerDelegate.h>
#import <libobjc.A.dylib/EKEventAttachmentEditViewControllerDelegate.h>

@class NSArray, NSString;

@interface EKEventAttachmentsEditItem : EKEventEditItem <EKEventAttachmentCellControllerDelegate, EKEventAttachmentEditViewControllerDelegate> {

	NSArray* _cellControllers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfSubitems;
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 ;
-(id)detailViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2 ;
-(BOOL)usesDetailViewControllerForSubitem:(unsigned long long)arg1 ;
-(void)editor:(id)arg1 didSelectSubitem:(unsigned long long)arg2 ;
-(void)refreshFromCalendarItemAndStore;
-(BOOL)canBeConfiguredForCalendarConstraints:(id)arg1 ;
-(id)owningEventForAttachmentEditViewController:(id)arg1 ;
-(id)parentViewControllerForAttachmentCellController:(id)arg1 ;
-(id)owningEventForAttachmentCellController:(id)arg1 ;
-(BOOL)_shouldCondenseIntoSingleItem;
-(void)_cleanUpCellControllers;
@end

