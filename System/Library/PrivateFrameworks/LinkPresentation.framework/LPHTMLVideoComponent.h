/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:06 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LinkPresentation/LPHTMLComponent.h>
#import <libobjc.A.dylib/DOMEventListener.h>

@class LPVideo, DOMElement, DOMHTMLVideoElement, DOMHTMLIFrameElement, WebScriptObject, NSString;

@interface LPHTMLVideoComponent : LPHTMLComponent <DOMEventListener> {

	LPVideo* _video;
	DOMElement* _playButton;
	DOMElement* _muteButton;
	DOMElement* _muteButtonContainer;
	DOMElement* _videoPosterFrame;
	DOMElement* _videoOverlay;
	DOMHTMLVideoElement* _videoElement;
	DOMHTMLIFrameElement* _youTubeContainerElement;
	BOOL _isVisible;
	BOOL _wasPlayingWhenHidden;
	WebScriptObject* _isVisibleFunction;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)ruleDictionaryForStyle:(id)arg1 ;
+(id)styleSet;
-(void)handleEvent:(id)arg1 ;
-(BOOL)isVisible;
-(BOOL)isPlaying;
-(void)play;
-(void)pause;
-(BOOL)shouldAutoPlay;
-(void)updateVisibility;
-(id)initWithVideo:(id)arg1 style:(id)arg2 posterFrame:(id)arg3 posterFrameStyle:(id)arg4 themePath:(id)arg5 generator:(id)arg6 ;
-(void)buildComponentWithPosterFrame:(id)arg1 posterFrameStyle:(id)arg2 ;
-(id)createVideoElement;
-(id)resolvedVideoElement;
-(id)youTubeParametersForVideoURL:(id)arg1 ;
-(void)togglePlaying;
@end

