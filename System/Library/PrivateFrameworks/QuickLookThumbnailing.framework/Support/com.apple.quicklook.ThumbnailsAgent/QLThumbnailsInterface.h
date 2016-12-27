/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:11 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/QuickLookThumbnailing.framework/Support/com.apple.quicklook.ThumbnailsAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol QLThumbnailsInterface
@required
-(void)requestWritingThumbnailOfMaximumSize:(CGSize)arg1 forDocumentAtURL:(id)arg2 sandboxExtension:(id)arg3 toFileHandle:(id)arg4 atBackgroundPriority:(BOOL)arg5 completionHandler:(/*^block*/id)arg6;
-(void)thumbnailsStoreURLForURL:(id)arg1 completionBlock:(/*^block*/id)arg2;
-(void)removeThumbnailAdditionsOnURL:(id)arg1 completionBlock:(/*^block*/id)arg2;
-(void)requestWritingThumbnailOfMaximumSize:(CGSize)arg1 forDocumentAtURL:(id)arg2 toFileHandle:(id)arg3 atBackgroundPriority:(BOOL)arg4 completionHandler:(/*^block*/id)arg5;
-(void)hasThumbnailForURL:(id)arg1 updateLastHitDate:(BOOL)arg2 andSize:(unsigned long long)arg3 completion:(/*^block*/id)arg4;
-(void)askThumbnailAdditionIndex:(/*^block*/id)arg1;
-(void)requestThumbnailOfMaximumSize:(CGSize)arg1 scale:(double)arg2 forPreviewItem:(id)arg3 completionHandler:(/*^block*/id)arg4;

@end

