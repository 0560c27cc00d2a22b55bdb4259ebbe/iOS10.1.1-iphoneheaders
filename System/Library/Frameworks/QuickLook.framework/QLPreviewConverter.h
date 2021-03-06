/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:35 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class QLPreviewParts, NSDictionary, NSString, NSURLRequest, NSURLResponse;

@interface QLPreviewConverter : NSObject {

	QLPreviewParts* _previewParts;
	NSDictionary* _options;

}

@property (nonatomic,readonly) NSString * previewFileName; 
@property (nonatomic,readonly) NSString * previewUTI; 
@property (nonatomic,readonly) NSURLRequest * previewRequest; 
@property (nonatomic,readonly) NSURLResponse * previewResponse; 
@property (nonatomic,readonly) QLPreviewParts * previewParts; 
+(id)_officeUTIs;
+(id)_iWorkUTIs;
+(id)_csvUTIs;
+(id)_lpdfUTIs;
+(id)_rtfUTIs;
+(id)_spreadSheetUTIs;
+(BOOL)canConvertDocumentType:(id)arg1 ;
+(BOOL)isSafeURL:(id)arg1 ;
+(BOOL)isOfficeDocumentType:(id)arg1 ;
+(BOOL)isCSVDocumentType:(id)arg1 ;
+(BOOL)isLPDFDocumentType:(id)arg1 ;
+(BOOL)isRTFDocumentType:(id)arg1 ;
+(BOOL)isSafeRequest:(id)arg1 ;
+(BOOL)isIWorkDocumentType:(id)arg1 ;
+(BOOL)isSpreadSheetDocumentType:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(BOOL)isCancelled;
-(void)appendData:(id)arg1 ;
-(BOOL)isComputed;
-(NSURLRequest *)previewRequest;
-(NSURLResponse *)previewResponse;
-(id)safeRequestForRequest:(id)arg1 ;
-(void)setHtmlErrorDisabled:(BOOL)arg1 ;
-(BOOL)htmlErrorDisabled;
-(id)initWithURL:(id)arg1 uti:(id)arg2 options:(id)arg3 ;
-(id)initWithData:(id)arg1 name:(id)arg2 uti:(id)arg3 options:(id)arg4 ;
-(id)initWithConnection:(id)arg1 delegate:(id)arg2 response:(id)arg3 options:(id)arg4 ;
-(void)finishConverting;
-(NSString *)previewFileName;
-(NSString *)previewUTI;
-(QLPreviewParts *)previewParts;
-(void)appendDataArray:(id)arg1 ;
-(void)finishedAppendingData;
-(void)_register;
@end

