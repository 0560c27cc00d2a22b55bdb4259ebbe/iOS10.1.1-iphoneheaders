/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:34 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Assistant/UIPlugins/Movies.siriUIBundle/Movies
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUISnippetViewController.h>

@protocol SVSOrientationDelegate;
@class SiriMoviesDetailView, SiriMoviesDetailContainerView, SiriUISnippetViewController, SiriAVPlayerViewController, NSString, SAMovieV2MovieDetailSnippet;

@interface SiriMoviesDetailViewController : SiriUISnippetViewController {

	SiriMoviesDetailView* _detailView;
	SiriMoviesDetailContainerView* _detailContainerView;
	SiriUISnippetViewController* _showtimesViewController;
	BOOL _shouldAutoPlayTrailer;
	BOOL _cancelAutoPlayTrailer;
	BOOL _observingPlayerStatus;
	BOOL _observingItemStatus;
	BOOL _observingPlayback;
	BOOL _observingViewController;
	void* _playerStatusObserverContext;
	void* _itemStatusObserverContext;
	id<SVSOrientationDelegate> _orientationDelegate;
	SiriAVPlayerViewController* _trailerPlayerController;
	NSString* _savedAudioSessionCategory;
	unsigned long long _savedAudioSessionCategoryOptions;

}

@property (nonatomic,retain) SAMovieV2MovieDetailSnippet * snippet; 
@property (getter=_orientationDelegate,nonatomic,retain) id<SVSOrientationDelegate> orientationDelegate;                                                                             //@synthesize orientationDelegate=_orientationDelegate - In the implementation block
@property (setter=_setTrailerPlayerController:,getter=_trailerPlayerController,nonatomic,retain) SiriAVPlayerViewController * trailerPlayerController;                               //@synthesize trailerPlayerController=_trailerPlayerController - In the implementation block
@property (setter=_setSavedAudioSessionCategory:,getter=_savedAudioSessionCategory,nonatomic,retain) NSString * savedAudioSessionCategory;                                           //@synthesize savedAudioSessionCategory=_savedAudioSessionCategory - In the implementation block
@property (assign,setter=_setSavedAudioSessionCategoryOptions:,getter=_savedAudioSessionCategoryOptions,nonatomic) unsigned long long savedAudioSessionCategoryOptions;              //@synthesize savedAudioSessionCategoryOptions=_savedAudioSessionCategoryOptions - In the implementation block
-(id)_savedAudioSessionCategory;
-(void)_setSavedAudioSessionCategory:(id)arg1 ;
-(id)initWithMovieDetailSnippet:(id)arg1 ;
-(void)watchTrailerButtonTapped:(id)arg1 ;
-(void)_rotateTrailerViewIfNecessary:(id)arg1 ;
-(void)_setTrailerPlayerController:(id)arg1 ;
-(void)_registerObservers;
-(void)_moviePlayerPlaybackDidFinish:(id)arg1 ;
-(unsigned long long)_savedAudioSessionCategoryOptions;
-(void)showtimesButtonTapped:(id)arg1 ;
-(void)buyOnItunesButtonTapped:(id)arg1 ;
-(void)_setSavedAudioSessionCategoryOptions:(unsigned long long)arg1 ;
-(void)_dismissTrailerPlayerControllerAnimated:(BOOL)arg1 ;
-(id)_trailerPlayerController;
-(BOOL)_shouldPlayHighResolutionTrailer;
-(void)_startTrailer;
-(void)rentOnItunesButtonTapped:(id)arg1 ;
-(id)_orientationDelegate;
-(void)_updateMovieAudioPlaybackCategory;
-(void)_restoreAudioPlaybackCategoryAndOptions;
-(void)reviewsButtonTapped:(id)arg1 ;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(double)desiredHeightForWidth:(double)arg1 ;
-(void)setOrientationDelegate:(id<SVSOrientationDelegate>)arg1 ;
-(void)_removeObservers;
-(void)siriWillActivateFromSource:(long long)arg1 ;
-(void)siriDidDeactivate;
@end

