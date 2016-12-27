/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QLDetailItemViewController.h>

@protocol QLDownloadingItemViewControllerDelegate;
@class QLRoundProgressView, QLDetailItemViewControllerState, _QLDownloadOperation, UIImageView, UIImage;

@interface QLDownloadingItemViewController : QLDetailItemViewController {

	BOOL _downloading;
	BOOL _downloaded;
	BOOL _didDisappear;
	id _progressSubscriber;
	QLRoundProgressView* _progressView;
	QLDetailItemViewControllerState* _readyForDownloadState;
	QLDetailItemViewControllerState* _cancelableDownloadingState;
	QLDetailItemViewControllerState* _nonCancelableDownloadingState;
	QLDetailItemViewControllerState* _completedDownloadState;
	QLDetailItemViewControllerState* _previewLoadingState;
	_QLDownloadOperation* _downloadOperation;
	UIImageView* _downloadImageView;
	UIImage* _cloudImage;
	BOOL _showsLoadingPreviewSpinner;
	id<QLDownloadingItemViewControllerDelegate> _downloadingDelegate;

}

@property (assign,nonatomic) BOOL downloaded;                                                                     //@synthesize downloaded=_downloaded - In the implementation block
@property (nonatomic,readonly) QLRoundProgressView * progressView;                                                //@synthesize progressView=_progressView - In the implementation block
@property (assign,nonatomic,__weak) id<QLDownloadingItemViewControllerDelegate> downloadingDelegate;              //@synthesize downloadingDelegate=_downloadingDelegate - In the implementation block
@property (assign,nonatomic) BOOL showsLoadingPreviewSpinner;                                                     //@synthesize showsLoadingPreviewSpinner=_showsLoadingPreviewSpinner - In the implementation block
-(void)viewDidLoad;
-(void)setAppearance:(id)arg1 animated:(BOOL)arg2 ;
-(void)setShowsLoadingPreviewSpinner:(BOOL)arg1 ;
-(void)loadPreviewControllerWithPreviewItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setDownloadingDelegate:(id<QLDownloadingItemViewControllerDelegate>)arg1 ;
-(void)previewDidAppear:(BOOL)arg1 ;
-(void)previewDidDisappear:(BOOL)arg1 ;
-(void)_startDownload:(BOOL)arg1 ;
-(void)_updateFileSizeWithProgress:(double)arg1 animated:(BOOL)arg2 ;
-(void)_resetDownloadOperationBlocks;
-(void)_toggleDownload:(BOOL)arg1 ;
-(void)_stopDownload:(BOOL)arg1 ;
-(id)_newDownloadOperation;
-(void)_setDownloading:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_presentConnectivityAlert;
-(id<QLDownloadingItemViewControllerDelegate>)downloadingDelegate;
-(BOOL)showsLoadingPreviewSpinner;
-(void)performAction;
-(QLRoundProgressView *)progressView;
-(void)setDownloaded:(BOOL)arg1 ;
-(BOOL)downloaded;
@end

