/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PDFKit/PDFKit-Structs.h>
@class NSLock, PDFDocument;

@interface PDFViewLayoutPrivate : NSObject {

	id delegate;
	BOOL delegateKnowsMargins;
	BOOL delegateKnowsScaleFactor;
	BOOL delegateKnowsDisplayMode;
	BOOL delegateKnowsDisplayAsBook;
	BOOL delegateKnowsDisplayBox;
	BOOL delegateKnowsDisplaySoloPagesCentered;
	BOOL delegateKnowsDisplayRTL;
	BOOL delegateKnowsDisableInterpageSpacing;
	BOOL delegateKnowsFlipped;
	CGSize singlePageContinuousSize;
	CGSize twoUpContinousSize;
	CGRect* pageLayoutBounds;
	NSLock* layoutLock;
	PDFDocument* document;
	unsigned long long pageCount;
	NSRange pageSubrange;

}
@end

