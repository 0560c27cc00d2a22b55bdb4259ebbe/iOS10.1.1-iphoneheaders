/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class QLItem;

@interface _QLDownloadOperation : NSObject {

	QLItem* _previewItem;
	/*^block*/id _progressUpdateBlock;
	/*^block*/id _completionBlock;

}

@property (__weak,readonly) QLItem * previewItem;              //@synthesize previewItem=_previewItem - In the implementation block
@property (copy) id progressUpdateBlock;                       //@synthesize progressUpdateBlock=_progressUpdateBlock - In the implementation block
@property (copy) id completionBlock;                           //@synthesize completionBlock=_completionBlock - In the implementation block
-(BOOL)cancel;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(QLItem *)previewItem;
-(id)initWithPreviewItem:(id)arg1 ;
-(BOOL)performDownload;
-(BOOL)canBeCanceled;
-(void)subscribeToPreviewItemProgress;
-(id)progressUpdateBlock;
-(void)setProgressUpdateBlock:(id)arg1 ;
@end

