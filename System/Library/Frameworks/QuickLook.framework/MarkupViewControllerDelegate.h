/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:35 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MarkupViewControllerDelegate <NSObject>
@optional
-(id)controller:(id)arg1 willSetToolbarItems:(id)arg2;
-(void)controller:(id)arg1 didChangeToPDFPageIndex:(unsigned long long)arg2;
-(void)controller:(id)arg1 didReadCGPDFDocument:(CGPDFDocumentRef)arg2;
-(void)controller:(id)arg1 willWriteCGPDFDocument:(CGPDFDocumentRef)arg2 toContext:(CGContextRef)arg3;
-(UIEdgeInsets*)customEdgeInsets;
-(UIEdgeInsets*)customSketchOverlayInsets;

@end
