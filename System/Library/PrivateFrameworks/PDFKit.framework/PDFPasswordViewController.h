/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UIDocumentPasswordViewDelegate.h>

@class UIView, PDFView;

@interface PDFPasswordViewController : UIViewController <UIDocumentPasswordViewDelegate> {

	UIView* _passwordView;
	PDFView* _pdfView;

}
-(void)loadView;
-(void)_commonInit;
-(void)userDidEnterPassword:(id)arg1 forPasswordView:(id)arg2 ;
-(void)setPDFView:(id)arg1 ;
@end

