/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKitLegacy/WebKitLegacy-Structs.h>
#import <libobjc.A.dylib/WBUFormAutoFillFrameHandle.h>

@class NSURL, WebFramePrivate, NSString, WebView, WebFrameView, DOMDocument, DOMHTMLElement, WebDataSource, NSArray, WebScriptObject, JSContext;

@interface WebFrame : NSObject <WBUFormAutoFillFrameHandle> {

	WebFramePrivate* _private;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSURL * webui_URL; 
@property (nonatomic,readonly) SecTrustRef webui_serverTrust; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,readonly) WebView * webView; 
@property (nonatomic,readonly) WebFrameView * frameView; 
@property (nonatomic,readonly) DOMDocument * DOMDocument; 
@property (nonatomic,readonly) DOMHTMLElement * frameElement; 
@property (nonatomic,readonly) WebDataSource * dataSource; 
@property (nonatomic,readonly) WebDataSource * provisionalDataSource; 
@property (nonatomic,readonly) WebFrame * parentFrame; 
@property (nonatomic,copy,readonly) NSArray * childFrames; 
@property (nonatomic,readonly) WebScriptObject * windowObject; 
@property (nonatomic,readonly) OpaqueJSContextRef globalContext; 
@property (nonatomic,readonly) JSContext * javaScriptContext; 
+(Ref<WebCore::Frame>*)_createFrameWithPage:(Page*)arg1 frameName:(const String*)arg2 frameView:(id)arg3 ownerElement:(HTMLFrameOwnerElement*)arg4 ;
+(void)_createMainFrameWithPage:(Page*)arg1 frameName:(const String*)arg2 frameView:(id)arg3 ;
+(Ref<WebCore::Frame>*)_createSubframeWithOwnerElement:(HTMLFrameOwnerElement*)arg1 frameName:(const String*)arg2 frameView:(id)arg3 ;
+(void)_createMainFrameWithSimpleHTMLDocumentWithPage:(Page*)arg1 frameView:(id)arg2 style:(id)arg3 ;
+(id)stringWithData:(id)arg1 textEncodingName:(id)arg2 ;
-(oneway void)release;
-(oneway void)_webcore_releaseOnWebThread;
-(id)dd_newOperation;
-(NSURL *)webui_URL;
-(SecTrustRef)webui_serverTrust;
-(BOOL)containsOnlySelectableElements;
-(BOOL)isTexty;
-(BOOL)isMainFrame;
-(CGRect)elementRectAtPoint:(CGPoint)arg1 ;
-(id)renderTreeAsExternalRepresentationForPrinting:(BOOL)arg1 ;
-(int)numberOfPagesWithPageWidth:(float)arg1 pageHeight:(float)arg2 ;
-(void)printToCGContext:(CGContextRef)arg1 pageWidth:(float)arg2 pageHeight:(float)arg3 ;
-(id)_documentFragmentWithMarkupString:(id)arg1 baseURLString:(id)arg2 ;
-(BOOL)_isIncludedInWebKitStatistics;
-(Frame*)coreFrame;
-(id)_initWithWebFrameView:(id)arg1 webView:(id)arg2 ;
-(BOOL)_hasSelection;
-(id)_findFrameWithSelection;
-(BOOL)_shouldFlattenCompositingLayers:(CGContextRef)arg1 ;
-(id)_stringByEvaluatingJavaScriptFromString:(id)arg1 forceUserGesture:(BOOL)arg2 ;
-(CGRect)_firstRectForDOMRange:(id)arg1 ;
-(PassRefPtr<WebCore::Range>*)_convertToDOMRange:(NSRange)arg1 rangeIsRelativeTo:(unsigned char)arg2 ;
-(PassRefPtr<WebCore::Range>*)_convertToDOMRange:(NSRange)arg1 ;
-(NSRange)_convertToNSRange:(Range*)arg1 ;
-(BOOL)_canProvideDocumentSource;
-(void)_attachScriptDebugger;
-(void)_detachScriptDebugger;
-(void)_clearCoreFrame;
-(void)_updateBackgroundAndUpdatesWhileOffscreen;
-(void)_setInternalLoadDelegate:(id)arg1 ;
-(id)_internalLoadDelegate;
-(void)_unmarkAllBadGrammar;
-(void)_unmarkAllMisspellings;
-(void)_clearSelectionInOtherFrames;
-(BOOL)_isCommitting;
-(void)_setIsCommitting:(BOOL)arg1 ;
-(id)_nodesFromList:(Vector<WebCore::Node *, 0, WTF::CrashOnOverflow, 16>*)arg1 ;
-(id)_selectedString;
-(id)_stringForRange:(id)arg1 ;
-(void)_drawRect:(CGRect)arg1 contentsOnly:(BOOL)arg2 ;
-(BOOL)_getVisibleRect:(CGRect*)arg1 ;
-(id)_stringByEvaluatingJavaScriptFromString:(id)arg1 ;
-(CGRect)_caretRectAtPosition:(const Position*)arg1 affinity:(int)arg2 ;
-(void)_scrollDOMRangeToVisible:(id)arg1 ;
-(void)_scrollDOMRangeToVisible:(id)arg1 withInset:(double)arg2 ;
-(id)_convertNSRangeToDOMRange:(NSRange)arg1 ;
-(NSRange)_convertDOMRangeToNSRange:(id)arg1 ;
-(id)_markDOMRange;
-(id)_smartDeleteRangeForProposedRange:(id)arg1 ;
-(id)_documentFragmentWithNodesAsParagraphs:(id)arg1 ;
-(void)_replaceSelectionWithNode:(id)arg1 selectReplacement:(BOOL)arg2 smartReplace:(BOOL)arg3 matchStyle:(BOOL)arg4 ;
-(void)_insertParagraphSeparatorInQuotedContent;
-(VisiblePosition*)_visiblePositionForPoint:(CGPoint)arg1 ;
-(id)_characterRangeAtPoint:(CGPoint)arg1 ;
-(id)_typingStyle;
-(void)_setTypingStyle:(id)arg1 withUndoAction:(int)arg2 ;
-(BOOL)_canSaveAsWebArchive;
-(void)_commitData:(id)arg1 ;
-(void)_setTextAutosizingWidth:(double)arg1 ;
-(OpaqueJSContextRef)_globalContextForScriptWorld:(id)arg1 ;
-(void)_setShouldCreateRenderers:(BOOL)arg1 ;
-(BOOL)_isFrameSet;
-(BOOL)_firstLayoutDone;
-(BOOL)_loadsSynchronously;
-(id)_selectionRangeForFirstPoint:(CGPoint)arg1 secondPoint:(CGPoint)arg2 ;
-(id)_selectionRangeForPoint:(CGPoint)arg1 ;
-(BOOL)_isDisplayingStandaloneImage;
-(unsigned)_pendingFrameUnloadEventCount;
-(unsigned)formElementsCharacterCount;
-(void)selectNSRange:(NSRange)arg1 ;
-(NSRange)selectedNSRange;
-(void)_restoreViewState;
-(void)_saveViewState;
-(CGSize)renderedSizeOfNode:(id)arg1 constrainedToWidth:(float)arg2 ;
-(void)setCaretColor:(CGColorRef)arg1 ;
-(int)layoutCount;
-(BOOL)isTelephoneNumberParsingAllowed;
-(BOOL)isTelephoneNumberParsingEnabled;
-(void)expandSelectionToStartOfWordContainingCaretSelection;
-(id)wordInRange:(id)arg1 ;
-(BOOL)spaceFollowsWordInRange:(id)arg1 ;
-(id)wordsInCurrentParagraph;
-(BOOL)selectionAtSentenceStart;
-(void)selectNSRange:(NSRange)arg1 onElement:(id)arg2 ;
-(void)setMarkedText:(id)arg1 forCandidates:(BOOL)arg2 ;
-(void)_replaceSelectionWithText:(id)arg1 selectReplacement:(BOOL)arg2 smartReplace:(BOOL)arg3 matchStyle:(BOOL)arg4 ;
-(void)_replaceSelectionWithText:(id)arg1 selectReplacement:(BOOL)arg2 smartReplace:(BOOL)arg3 ;
-(void)_replaceSelectionWithMarkupString:(id)arg1 baseURLString:(id)arg2 selectReplacement:(BOOL)arg3 smartReplace:(BOOL)arg4 ;
-(id)_cacheabilityDictionary;
-(BOOL)_allowsFollowingLink:(id)arg1 ;
-(id)_stringByEvaluatingJavaScriptFromString:(id)arg1 withGlobalObject:(OpaqueJSValueRef)arg2 inScriptWorld:(id)arg3 ;
-(id)_javaScriptContextForScriptWorld:(id)arg1 ;
-(void)setAccessibleName:(id)arg1 ;
-(BOOL)enhancedAccessibilityEnabled;
-(void)setEnhancedAccessibility:(BOOL)arg1 ;
-(id)_layerTreeAsText;
-(id)accessibilityRoot;
-(void)_clearOpener;
-(id)_computePageRectsWithPrintScaleFactor:(float)arg1 pageSize:(CGSize)arg2 ;
-(id)_documentFragmentForText:(id)arg1 ;
-(id)_documentFragmentForWebArchive:(id)arg1 ;
-(id)_documentFragmentForImageData:(id)arg1 withRelativeURLPart:(id)arg2 andMIMEType:(id)arg3 ;
-(void)_dispatchDidReceiveTitle:(id)arg1 ;
-(OpaqueJSValueRef)jsWrapperForNode:(id)arg1 inScriptWorld:(id)arg2 ;
-(void)_loadData:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 baseURL:(id)arg4 unreachableURL:(id)arg5 ;
-(void)_loadHTMLString:(id)arg1 baseURL:(id)arg2 unreachableURL:(id)arg3 ;
-(id)initWithName:(id)arg1 webFrameView:(id)arg2 webView:(id)arg3 ;
-(DOMHTMLElement *)frameElement;
-(id)findFrameNamed:(id)arg1 ;
-(JSContext *)javaScriptContext;
-(VisiblePosition*)visiblePositionForPoint:(CGPoint)arg1 ;
-(id)selectionRectsForCoreRange:(Range*)arg1 ;
-(BOOL)setSelectionWithBasePoint:(CGPoint)arg1 extentPoint:(CGPoint)arg2 baseIsStart:(BOOL)arg3 allowFlipping:(BOOL)arg4 ;
-(VisiblePosition*)closestWordBoundary:(VisiblePosition*)arg1 ;
-(void)extendSelection:(BOOL)arg1 ;
-(BOOL)setSelectionWithBasePoint:(CGPoint)arg1 extentPoint:(CGPoint)arg2 baseIsStart:(BOOL)arg3 ;
-(void)ensureRangedSelectionContainsInitialStartPoint:(CGPoint)arg1 initialEndPoint:(CGPoint)arg2 ;
-(void)expandSelectionToSentence;
-(BOOL)renderedCharactersExceed:(unsigned long long)arg1 ;
-(CGImageRef)imageForNode:(id)arg1 allowDownsampling:(BOOL)arg2 drawContentBehindTransparentNodes:(BOOL)arg3 ;
-(id)init;
-(void)setNeedsLayout;
-(void)dealloc;
-(void)reload;
-(BOOL)_needsLayout;
-(WebDataSource *)dataSource;
-(id)_dataSource;
-(NSString *)name;
-(void)_handleKeyEvent:(id)arg1 ;
-(BOOL)needsLayout;
-(void)setMarkedText:(id)arg1 selectedRange:(NSRange)arg2 ;
-(CGRect)caretRectForPosition:(id)arg1 ;
-(id)selectionRectsForRange:(id)arg1 ;
-(id)characterRangeAtPoint:(CGPoint)arg1 ;
-(int)selectionAffinity;
-(id)selectedDOMRange;
-(void)_setSelectionFromNone;
-(WebView *)webView;
-(WebFrameView *)frameView;
-(id)documentView;
-(void)updateLayout;
-(void)setSelectionChangeCallbacksDisabled:(BOOL)arg1 ;
-(DOMDocument *)DOMDocument;
-(void)setDictationPhrases:(id)arg1 metadata:(id)arg2 asChildOfElement:(id)arg3 ;
-(CGRect)rectForScrollToVisible;
-(id)convertNSRangeToDOMRange:(NSRange)arg1 ;
-(CGRect)caretRectAtNode:(id)arg1 offset:(int)arg2 affinity:(int)arg3 ;
-(BOOL)hasSelection;
-(void)setText:(id)arg1 asChildOfElement:(id)arg2 ;
-(NSRange)_selectedNSRange;
-(void)setSelectedDOMRange:(id)arg1 affinity:(int)arg2 closeTyping:(BOOL)arg3 ;
-(void)setIsActive:(BOOL)arg1 ;
-(id)startPosition;
-(CGRect)firstRectForDOMRange:(id)arg1 ;
-(void)setSelectionGranularity:(int)arg1 ;
-(void)clearSelection;
-(void)collapseSelection;
-(CGRect)caretRect;
-(void)_selectAll;
-(int)preferredHeight;
-(void)confirmMarkedText:(id)arg1 ;
-(unsigned short)characterInRelationToCaretSelection:(int)arg1 ;
-(unsigned short)characterBeforeCaretSelection;
-(unsigned short)characterAfterCaretSelection;
-(id)nextUnperturbedDictationResultBoundaryFromPosition:(id)arg1 ;
-(int)wordOffsetInRange:(id)arg1 ;
-(int)selectionState;
-(BOOL)selectionAtDocumentStart;
-(BOOL)selectionAtWordStart;
-(id)rangeByMovingCurrentSelection:(int)arg1 ;
-(id)rangeByExtendingCurrentSelection:(int)arg1 ;
-(BOOL)hasEditableSelection;
-(void)loadRequest:(id)arg1 ;
-(void)loadHTMLString:(id)arg1 baseURL:(id)arg2 ;
-(void)loadData:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 baseURL:(id)arg4 ;
-(void)_setLoadsSynchronously:(BOOL)arg1 ;
-(void)resetTextAutosizingBeforeLayout;
-(void)sendScrollEvent;
-(void)_userScrolled;
-(CGColorRef)_bodyBackgroundColor;
-(BOOL)_isVisuallyNonEmpty;
-(int)_loadType;
-(BOOL)hasRichlyEditableSelection;
-(void)_replaceSelectionWithFragment:(id)arg1 selectReplacement:(BOOL)arg2 smartReplace:(BOOL)arg3 matchStyle:(BOOL)arg4 ;
-(void)removeUnchangeableStyles;
-(void)deviceOrientationChanged;
-(void)sendOrientationChangeEvent:(int)arg1 ;
-(void)getDictationResultRanges:(id*)arg1 andMetadatas:(id*)arg2 ;
-(id)stringForRange:(id)arg1 ;
-(id)dictationResultMetadataForRange:(id)arg1 ;
-(void)forceLayoutAdjustingViewSize:(BOOL)arg1 ;
-(id)interpretationsForCurrentRoot;
-(void)selectWithoutClosingTypingNSRange:(NSRange)arg1 ;
-(void)expandSelectionToWordContainingCaretSelection;
-(CTFontRef)fontForSelection:(BOOL*)arg1 ;
-(void)_replaceSelectionWithWebArchive:(id)arg1 selectReplacement:(BOOL)arg2 smartReplace:(BOOL)arg3 ;
-(void)expandSelectionToElementContainingCaretSelection;
-(BOOL)focusedNodeHasContent;
-(void)prepareForPause;
-(void)setTimeoutsPaused:(BOOL)arg1 ;
-(void)setPluginsPaused:(BOOL)arg1 ;
-(void)resumeFromPause;
-(void)setBaseWritingDirection:(int)arg1 ;
-(int)selectionBaseWritingDirection;
-(id)markedTextDOMRange;
-(id)endPosition;
-(id)webVisiblePositionForPoint:(CGPoint)arg1 ;
-(CGRect)renderRectForPoint:(CGPoint)arg1 isReplaced:(BOOL*)arg2 fontSize:(float*)arg3 ;
-(void)_setProhibitsScrolling:(BOOL)arg1 ;
-(id)elementRangeContainingCaretSelection;
-(void)moveSelectionToPoint:(CGPoint)arg1 ;
-(void)revealSelectionAtExtent:(BOOL)arg1 ;
-(int)innerLineHeight:(id)arg1 ;
-(id)approximateNodeAtViewportLocation:(CGPoint*)arg1 ;
-(id)deepestNodeAtViewportLocation:(CGPoint)arg1 ;
-(id)scrollableNodeAtViewportLocation:(CGPoint)arg1 ;
-(NSArray *)childFrames;
-(void)_setVisibleSize:(CGSize)arg1 ;
-(void)stopLoading;
-(id)elementAtPoint:(CGPoint)arg1 ;
-(id)selectionRects;
-(void)setRangedSelectionBaseToCurrentSelection;
-(void)clearRangedSelectionInitialExtent;
-(void)setRangedSelectionWithExtentPoint:(CGPoint)arg1 ;
-(void)setSelectionWithFirstPoint:(CGPoint)arg1 secondPoint:(CGPoint)arg2 ;
-(void)setRangedSelectionBaseToCurrentSelectionStart;
-(void)setRangedSelectionInitialExtentToCurrentSelectionEnd;
-(void)setRangedSelectionBaseToCurrentSelectionEnd;
-(void)setRangedSelectionInitialExtentToCurrentSelectionStart;
-(void)aggressivelyExpandSelectionToWordContainingCaretSelection;
-(CGRect)closestCaretRectInMarkedTextRangeForPoint:(CGPoint)arg1 ;
-(NSRange)convertDOMRangeToNSRange:(id)arg1 ;
-(void)toggleBaseWritingDirection;
-(BOOL)setRangedSelectionExtentPoint:(CGPoint)arg1 baseIsStart:(BOOL)arg2 allowFlipping:(BOOL)arg3 ;
-(id)wordAtPoint:(CGPoint)arg1 ;
-(void)smartExtendRangedSelection:(int)arg1 ;
-(void)moveSelectionToEnd;
-(void)moveSelectionToStart;
-(void)resetSelection;
-(BOOL)_isDescendantOfFrame:(id)arg1 ;
-(WebDataSource *)provisionalDataSource;
-(id)stringByEvaluatingJavaScriptFromString:(id)arg1 forceUserGesture:(BOOL)arg2 ;
-(void)recursiveSetUpdateAppearanceEnabled:(BOOL)arg1 ;
-(id)_rectsForRange:(id)arg1 ;
-(void)loadAlternateHTMLString:(id)arg1 baseURL:(id)arg2 forUnreachableURL:(id)arg3 ;
-(void)reloadFromOrigin;
-(int)_selectionGranularity;
-(id)previousUnperturbedDictationResultBoundaryFromPosition:(id)arg1 ;
-(id)wordRangeContainingCaretSelection;
-(void)_selectNSRange:(NSRange)arg1 ;
-(WebScriptObject *)windowObject;
-(void)loadArchive:(id)arg1 ;
-(WebFrame *)parentFrame;
-(OpaqueJSContextRef)globalContext;
-(void)_clearSelection;
-(id)_unreachableURL;
@end
