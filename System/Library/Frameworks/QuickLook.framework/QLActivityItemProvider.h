/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:35 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <UIKit/UIActivityItemSource.h>

@class QLPreviewPrinter, QLItem, NSString;

@interface QLActivityItemProvider : NSObject <UIActivityItemSource> {

	QLPreviewPrinter* _printer;
	QLItem* _activityPreviewItem;

}

@property (retain) QLPreviewPrinter * printer;                      //@synthesize printer=_printer - In the implementation block
@property (retain) QLItem * activityPreviewItem;                    //@synthesize activityPreviewItem=_activityPreviewItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)printInfo;
-(QLPreviewPrinter *)printer;
-(void)setPrinter:(QLPreviewPrinter *)arg1 ;
-(id)activityViewControllerPlaceholderItem:(id)arg1 ;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2 ;
-(id)activityViewControllerPlaceholderItems:(id)arg1 ;
-(QLItem *)activityPreviewItem;
-(id)itemURL;
-(id)_pdfPreviewDataAtURL:(id)arg1 ;
-(void)setActivityPreviewItem:(QLItem *)arg1 ;
@end

