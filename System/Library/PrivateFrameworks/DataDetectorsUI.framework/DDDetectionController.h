/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataDetectorsUI/DataDetectorsUI-Structs.h>
#import <UIKit/UIActionSheetDelegate.h>

@protocol OS_dispatch_queue, DDDetectionControllerDelegate;
@class NSOperationQueue, NSObject, NSMapTable, DDActionController, NSString;

@interface DDDetectionController : NSObject <UIActionSheetDelegate> {

	NSOperationQueue* _fullScannerQueue;
	NSOperationQueue* _urlScannerQueue;
	NSObject*<OS_dispatch_queue> _protectQueue;
	NSMapTable* _containerToOperationsTable;
	NSMapTable* _containerToResultsTable;
	NSMapTable* _containerToContextsTable;
	DDActionController* _actionController;
	NSObject*<DDDetectionControllerDelegate> _delegate;

}

@property (__weak) NSObject*<DDDetectionControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedController;
+(id)tapAndHoldSchemes;
+(BOOL)_shouldConsiderResultForCoreRecents:(_DDResult*)arg1 ;
-(id)init;
-(void)setDelegate:(NSObject*<DDDetectionControllerDelegate>)arg1 ;
-(void)dealloc;
-(NSObject*<DDDetectionControllerDelegate>)delegate;
-(void)frameWillBeRemoved:(id)arg1 ;
-(void)cancelURLificationForFrame:(id)arg1 ;
-(void)startURLificationForFrame:(id)arg1 detectedTypes:(unsigned long long)arg2 ;
-(void)resetResultsForFrame:(id)arg1 ;
-(DDResultRef)resultForNode:(id)arg1 url:(id)arg2 frame:(id)arg3 contextRef:(id*)arg4 ;
-(id)copyContextForContainer:(id)arg1 ;
-(id)actionsForDOMNode:(id)arg1 forFrame:(id)arg2 ;
-(void)performAction:(id)arg1 fromAlertController:(id)arg2 interactionDelegate:(id)arg3 ;
-(BOOL)shouldImmediatelyShowActionSheetForURL:(id)arg1 forFrame:(id)arg2 ;
-(id)defaultActionForDOMNode:(id)arg1 forFrame:(id)arg2 ;
-(void)performAction:(id)arg1 inView:(id)arg2 interactionDelegate:(id)arg3 ;
-(void)startURLificationForFrame:(id)arg1 detectedTypes:(unsigned long long)arg2 options:(int)arg3 ;
-(BOOL)shouldUseLightStyleAtIndex:(unsigned long long)arg1 ofStorage:(id)arg2 ;
-(void)cancelURLificationForContainer:(id)arg1 ;
-(void)startURLificationForContainer:(id)arg1 detectedTypes:(unsigned long long)arg2 ;
-(void)resetResultsForContainer:(id)arg1 ;
-(DDResultRef)resultForLinkAtIndex:(unsigned long long)arg1 inTextStorage:(id)arg2 ;
-(BOOL)shouldImmediatelyShowActionSheetForTapAtIndex:(unsigned long long)arg1 ofStorage:(id)arg2 ;
-(id)titleForResultAtIndex:(unsigned long long)arg1 ofStorage:(id)arg2 context:(id)arg3 ;
-(id)actionsAtIndex:(unsigned long long)arg1 ofStorage:(id)arg2 context:(id)arg3 ;
-(id)defaultActionAtIndex:(unsigned long long)arg1 ofStorage:(id)arg2 context:(id)arg3 ;
-(void)performAction:(id)arg1 fromView:(id)arg2 alertController:(id)arg3 interactionDelegate:(id)arg4 ;
-(id)actionsForURL:(id)arg1 identifier:(id)arg2 selectedText:(id)arg3 results:(id)arg4 context:(id)arg5 ;
-(id)actionsForAnchor:(id)arg1 url:(id)arg2 forFrame:(id)arg3 ;
-(DDResultRef)resultForURL:(id)arg1 identifier:(id)arg2 selectedText:(id)arg3 results:(id)arg4 context:(id)arg5 extendedContext:(id*)arg6 ;
-(void)_enqueueOperation:(id)arg1 ;
-(void)_resetStoredResultsForContainer:(id)arg1 ;
-(void)resetResultsForTextView:(id)arg1 ;
-(void)_startCoalescedURLification:(id)arg1 clearPreviousResults:(BOOL)arg2 ;
-(id)_newOperationForContainer:(id)arg1 ;
-(void)_startCoalescedURLification:(id)arg1 ;
-(void)startURLificationForContainer:(id)arg1 detectedTypes:(unsigned long long)arg2 options:(int)arg3 ;
-(void)_doURLification:(id)arg1 ;
-(_DDResult*)_resultForIdentifier:(id)arg1 forContainer:(id)arg2 context:(id*)arg3 ;
-(void)setResults:(CFArrayRef)arg1 forContainer:(id)arg2 ;
-(void)setContext:(id)arg1 forContainer:(id)arg2 ;
-(void)_commonResetResultsForContainer:(id)arg1 ;
-(void)containerWillBeRemoved:(id)arg1 ;
-(_DDResult*)_resultForURL:(id)arg1 forContainer:(id)arg2 context:(id*)arg3 ;
-(BOOL)_shouldImmediatelyShowActionSheetForCoreResult:(_DDResult*)arg1 ;
-(BOOL)_shouldImmediatelyShowActionSheetForURL:(id)arg1 ;
-(DDResultRef)_resultForAnchor:(id)arg1 forFrame:(id)arg2 context:(id*)arg3 ;
-(id)_plainTextAugmentedContext:(id)arg1 withFrame:(id)arg2 ;
-(DDResultRef)_resultForIdentifier:(id)arg1 withResults:(id)arg2 context:(id*)arg3 ;
-(DDResultRef)_resultForURL:(id)arg1 withResults:(id)arg2 context:(id*)arg3 ;
-(id)defaultActionForAnchor:(id)arg1 url:(id)arg2 forFrame:(id)arg3 ;
-(void)setResults:(CFArrayRef)arg1 forFrame:(id)arg2 ;
-(void)setContext:(id)arg1 forFrame:(id)arg2 ;
-(DDResultRef)resultForDOMNode:(id)arg1 forFrame:(id)arg2 ;
-(id)actionsForURL:(id)arg1 ;
-(id)defaultActionForURL:(id)arg1 results:(id)arg2 context:(id)arg3 ;
-(id)titleForURL:(id)arg1 results:(id)arg2 context:(id)arg3 ;
-(id)_subResultAtIndex:(unsigned long long)arg1 ofResult:(id)arg2 ;
-(id)_resultForLinkAtIndex:(unsigned long long)arg1 inTextStorage:(id)arg2 subResult:(id*)arg3 url:(id*)arg4 ;
-(id)_applyBlock:(/*^block*/id)arg1 withResultsAtIndex:(unsigned long long)arg2 ofStorage:(id)arg3 context:(id)arg4 ;
@end

