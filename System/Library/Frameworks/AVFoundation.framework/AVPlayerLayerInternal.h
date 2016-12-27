/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:58 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, AVCallbackCancellation;
#import <AVFoundation/AVFoundation-Structs.h>
@class AVNetworkPlaybackPerfHUDLayer, NSObject, NSString, AVKeyPathDependencyManager, AVPlayer, NSDictionary, FigBaseCALayer, FigVideoContainerLayer, FigSubtitleCALayer, AVPlayerLayer, NSSet, CALayer;

@interface AVPlayerLayerInternal : NSObject {

	AVNetworkPlaybackPerfHUDLayer* hudLayer;
	NSObject*<OS_dispatch_queue> serialQueue;
	BOOL isPresentationLayer;
	OpaqueFigSimpleMutexRef isReadyForDisplayMutex;
	NSObject*<OS_dispatch_queue> configurationQueue;
	NSString* subtitleGravity;
	AVKeyPathDependencyManager* dependencyManager;
	AVPlayer* player;
	NSString* videoGravity;
	NSDictionary* pixelBufferAttributes;
	BOOL lanczosDownscalingEnabled;
	long long lanczosDownscalingFactor;
	BOOL shouldObservePlayer;
	FigBaseCALayer* maskLayer;
	FigVideoContainerLayer* videoLayer;
	FigSubtitleCALayer* subtitleLayer;
	FigBaseCALayer* closedCaptionLayer;
	AVPlayerLayer* associatedPIPLayer;
	BOOL willManageSublayersAsSwappedLayers;
	BOOL canEnterPIPMode;
	BOOL isReadyForDisplay;
	AVPlayer* playerBeingObserved;
	NSSet* KVOInvokers;
	id<AVCallbackCancellation> playerCurrentItemHasVideoFrameEnqueuedKVOInvoker;
	CGSize latestAppliedPresentationSize;
	BOOL preventsChangesToSublayerHierarchy;
	NSDictionary* clientLayers;
	BOOL isPIPModeEnabled;
	CALayer* placeholderContentLayerDuringPIPMode;

}
@end

