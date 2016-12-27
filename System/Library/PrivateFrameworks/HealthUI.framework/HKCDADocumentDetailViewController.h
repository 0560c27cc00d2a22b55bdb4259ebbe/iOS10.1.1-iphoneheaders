/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:38 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class UIStackView, _HKReportSegmentControl, HKCDADocumentReportViewController, HKLargePlainTextViewController, UIBarButtonItem, HKBarButtonItemControl;

@interface HKCDADocumentDetailViewController : UIViewController {

	UIStackView* _stackView;
	_HKReportSegmentControl* _reportSegmentControl;
	HKCDADocumentReportViewController* _formattedReportController;
	HKLargePlainTextViewController* _plainTextReportController;
	UIBarButtonItem* _searchButton;
	HKBarButtonItemControl* _searchInSegmentControl;

}

@property (nonatomic,readonly) UIStackView * stackView;                                                    //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,readonly) _HKReportSegmentControl * reportSegmentControl;                             //@synthesize reportSegmentControl=_reportSegmentControl - In the implementation block
@property (nonatomic,readonly) HKCDADocumentReportViewController * formattedReportController;              //@synthesize formattedReportController=_formattedReportController - In the implementation block
@property (nonatomic,readonly) HKLargePlainTextViewController * plainTextReportController;                 //@synthesize plainTextReportController=_plainTextReportController - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * searchButton;                                             //@synthesize searchButton=_searchButton - In the implementation block
@property (nonatomic,readonly) HKBarButtonItemControl * searchInSegmentControl;                            //@synthesize searchInSegmentControl=_searchInSegmentControl - In the implementation block
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(UIStackView *)stackView;
-(UIBarButtonItem *)searchButton;
-(id)initWithReportData:(id)arg1 ;
-(void)searchButtonAction:(id)arg1 ;
-(void)changeReportDisplayed:(id)arg1 ;
-(void)_navigationBarDividingLine:(BOOL)arg1 ;
-(void)_replaceLastArrangedViewWith:(id)arg1 ;
-(_HKReportSegmentControl *)reportSegmentControl;
-(HKCDADocumentReportViewController *)formattedReportController;
-(HKLargePlainTextViewController *)plainTextReportController;
-(HKBarButtonItemControl *)searchInSegmentControl;
@end

