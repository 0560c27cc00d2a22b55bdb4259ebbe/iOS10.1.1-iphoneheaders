/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:28 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol TNUIStateDelegate;
@class TSURetainedPointerKeyDictionary, TSKSelectionPath, NSArray, NSMutableDictionary;

@interface TNUIState : NSObject <NSCopying> {

	TSURetainedPointerKeyDictionary* mSheetUIStates;
	TSURetainedPointerKeyDictionary* mEditModeSheetUIStates;
	BOOL mShowCanvasGuides;
	BOOL mInspectorPaneVisible;
	BOOL mInspectorPaneAutoHidden;
	BOOL mRemovedAllQuickCalcFunctions;
	BOOL mShowsComments;
	BOOL mShowsSidebar;
	BOOL mShowsRulers;
	int mInspectorPaneViewMode;
	TSKSelectionPath* mSelectionPath;
	id<TNUIStateDelegate> mDelegate;
	long long mDocumentMode;
	NSArray* mSelectedQuickCalcFunctions;
	NSMutableDictionary* mChartUIState;
	CGSize mDesktopScreenSize;
	CGRect mDesktopWindowFrame;

}

@property (nonatomic,readonly) NSMutableDictionary * chartUIState; 
@property (nonatomic,retain) TSKSelectionPath * selectionPath; 
@property (nonatomic,readonly) CGPoint scrollPosition; 
@property (nonatomic,readonly) CGPoint previousScrollPosition; 
@property (nonatomic,readonly) BOOL hasVisibleRect; 
@property (nonatomic,readonly) BOOL hasPreviousVisibleRect; 
@property (nonatomic,readonly) float viewScale; 
@property (nonatomic,readonly) float previousViewScale; 
@property (assign,nonatomic) CGRect visibleRect; 
@property (assign,nonatomic) CGRect previousVisibleRect; 
@property (assign,nonatomic) id<TNUIStateDelegate> delegate; 
@property (assign,nonatomic) long long documentMode; 
@property (assign,nonatomic) long long inspectorPaneHiddenState; 
@property (assign,nonatomic) int inspectorPaneViewMode; 
@property (nonatomic,copy) NSArray * selectedQuickCalcFunctions; 
@property (assign,nonatomic) BOOL removedAllQuickCalcFunctions; 
@property (assign,nonatomic) BOOL showsComments; 
@property (assign,nonatomic) BOOL showsSidebar; 
@property (assign,nonatomic) BOOL showsRulers; 
@property (assign,nonatomic) CGRect desktopWindowFrame; 
@property (assign,nonatomic) CGSize desktopScreenSize; 
@property (assign,nonatomic) BOOL showCanvasGuides; 
+(double)maximumViewScale;
+(double)minimumViewScale;
+(id)p_copyOfSheetUIStates:(id)arg1 ;
-(id)initWithArchive:(const UIStateArchive*)arg1 unarchiver:(id)arg2 ;
-(float)viewScale;
-(TSKSelectionPath *)selectionPath;
-(void)setSelectionPath:(TSKSelectionPath *)arg1 ;
-(id)UIStateForChart:(id)arg1 ;
-(void)setUIState:(id)arg1 forChart:(id)arg2 ;
-(void)saveToArchive:(UIStateArchive*)arg1 archiver:(id)arg2 context:(id)arg3 ;
-(id)archivedUIStateInContext:(id)arg1 ;
-(void)setInspectorPaneViewMode:(int)arg1 ;
-(int)inspectorPaneViewMode;
-(BOOL)showsComments;
-(void)setShowsComments:(BOOL)arg1 ;
-(long long)inspectorPaneHiddenState;
-(void)setInspectorPaneHiddenState:(long long)arg1 ;
-(id)p_uiStateForActiveSheet;
-(id)uiStateForSheet:(id)arg1 ;
-(float)p_calculateViewScaleForVisibleRect:(CGRect)arg1 ;
-(void)setVisibleRect:(CGRect)arg1 forSheet:(id)arg2 ;
-(void)clearVisibleRect;
-(CGRect)previousVisibleRect;
-(void)setPreviousVisibleRect:(CGRect)arg1 ;
-(void)setPreviousVisibleRect:(CGRect)arg1 forSheet:(id)arg2 ;
-(void)clearPreviousVisibleRect;
-(float)viewScaleForSheet:(id)arg1 ;
-(float)p_defaultViewScale;
-(BOOL)hasPreviousVisibleRect;
-(float)previousViewScale;
-(void)removeUIStateForSheet:(id)arg1 ;
-(void)setUIState:(id)arg1 forSheet:(id)arg2 ;
-(NSMutableDictionary *)chartUIState;
-(BOOL)hasVisibleRect;
-(void)p_enterPaginatedMode;
-(void)p_exitPaginatedMode;
-(long long)documentMode;
-(id)p_fixedUpSelectionPathForRestoration:(id)arg1 forcingUnpagination:(BOOL)arg2 ;
-(CGPoint)scrollPosition;
-(CGPoint)previousScrollPosition;
-(void)enumerateSheetUIStatesWithBlock:(/*^block*/id)arg1 ;
-(void)fixupSelectionPathsForRestorationForcingUnpagination:(BOOL)arg1 ;
-(void)setDocumentMode:(long long)arg1 ;
-(NSArray *)selectedQuickCalcFunctions;
-(void)setSelectedQuickCalcFunctions:(NSArray *)arg1 ;
-(BOOL)removedAllQuickCalcFunctions;
-(void)setRemovedAllQuickCalcFunctions:(BOOL)arg1 ;
-(BOOL)showCanvasGuides;
-(void)setShowCanvasGuides:(BOOL)arg1 ;
-(BOOL)showsSidebar;
-(void)setShowsSidebar:(BOOL)arg1 ;
-(BOOL)showsRulers;
-(void)setShowsRulers:(BOOL)arg1 ;
-(CGRect)desktopWindowFrame;
-(void)setDesktopWindowFrame:(CGRect)arg1 ;
-(CGSize)desktopScreenSize;
-(void)setDesktopScreenSize:(CGSize)arg1 ;
-(id)init;
-(void)setDelegate:(id<TNUIStateDelegate>)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id<TNUIStateDelegate>)delegate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGRect)visibleRect;
-(void)setVisibleRect:(CGRect)arg1 ;
@end

