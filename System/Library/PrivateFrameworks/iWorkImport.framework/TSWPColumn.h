/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:25 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPOffscreenColumn.h>

@protocol TSWPStyleProvider;
@class TSWPStorage, NSString;

@interface TSWPColumn : NSObject <TSWPOffscreenColumn> {

	TSWPStorage* _storage;
	CGRect _frameBounds;
	CGAffineTransform _transform;
	unsigned long long _startCharIndex;
	unsigned long long _characterCount;
	NSRange _anchoredAttachmentRange;
	unsigned long long _nextWidowPullsDownFromCharIndex;
	double _contentBottom;
	double _erasableContentBottom;
	double _nextLinePosition;
	int _layoutResultFlags;
	unsigned long long _columnIndex;
	unsigned long long _pageNumber;
	unsigned long long _scaleTextPercent;
	id<TSWPStyleProvider> _styleProvider;
	shared_ptr<TSWPLineFragmentArray>* _lineFragmentArray;
	unsigned long long _storageChangeCount;
	vector<TSWPAdornmentRect, std::__1::allocator<TSWPAdornmentRect> >* _paragraphAdornments;
	BOOL _textIsVertical;

}

@property (assign,nonatomic) CGRect wpBounds;                                                 //@synthesize frameBounds=_frameBounds - In the implementation block
@property (assign,nonatomic) CGAffineTransform transformFromWP;                               //@synthesize transform=_transform - In the implementation block
@property (nonatomic,readonly) CGAffineTransform transformToWP; 
@property (assign,nonatomic) unsigned long long startCharIndex;                               //@synthesize startCharIndex=_startCharIndex - In the implementation block
@property (assign,nonatomic) unsigned long long characterCount;                               //@synthesize characterCount=_characterCount - In the implementation block
@property (assign,nonatomic) unsigned long long nextWidowPullsDownFromCharIndex;              //@synthesize nextWidowPullsDownFromCharIndex=_nextWidowPullsDownFromCharIndex - In the implementation block
@property (assign,nonatomic) double contentBottom;                                            //@synthesize contentBottom=_contentBottom - In the implementation block
@property (assign,nonatomic) double nextLinePosition;                                         //@synthesize nextLinePosition=_nextLinePosition - In the implementation block
@property (assign,nonatomic) double erasableContentBottom;                                    //@synthesize erasableContentBottom=_erasableContentBottom - In the implementation block
@property (assign,nonatomic) int layoutResultFlags;                                           //@synthesize layoutResultFlags=_layoutResultFlags - In the implementation block
@property (assign,nonatomic) unsigned long long columnIndex;                                  //@synthesize columnIndex=_columnIndex - In the implementation block
@property (assign,nonatomic) unsigned long long pageNumber;                                   //@synthesize pageNumber=_pageNumber - In the implementation block
@property (assign,nonatomic) unsigned long long scaleTextPercent;                             //@synthesize scaleTextPercent=_scaleTextPercent - In the implementation block
@property (assign,nonatomic) NSRange anchoredRange; 
@property (assign,nonatomic) NSRange range; 
@property (nonatomic,retain) id<TSWPStyleProvider> styleProvider;                             //@synthesize styleProvider=_styleProvider - In the implementation block
@property (assign,nonatomic) BOOL textIsVertical;                                             //@synthesize textIsVertical=_textIsVertical - In the implementation block
@property (nonatomic,readonly) CGRect frameBounds; 
@property (nonatomic,readonly) CGRect typographicBoundsForCell; 
@property (nonatomic,readonly) TSWPStorage * storage;                                         //@synthesize storage=_storage - In the implementation block
@property (nonatomic,readonly) unsigned long long countLines; 
@property (nonatomic,readonly) double textBottom; 
@property (assign,nonatomic) unsigned long long storageChangeCount;                           //@synthesize storageChangeCount=_storageChangeCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long startAnchoredCharIndex; 
+(CGRect)boundsRectForSelection:(id)arg1 columnArray:(id)arg2 includeRuby:(BOOL)arg3 ;
+(id)columnForCharIndex:(unsigned long long)arg1 allowEndOfColumn:(BOOL)arg2 withColumns:(id)arg3 ;
+(CGRect)rectForSelection:(id)arg1 withColumns:(id)arg2 useParagraphModeRects:(BOOL)arg3 ;
+(unsigned long long)charIndexForPoint:(CGPoint)arg1 inColumnsArray:(id)arg2 allowPastBreak:(BOOL)arg3 allowNotFound:(BOOL)arg4 pastCenterGoesToNextChar:(BOOL)arg5 isAtEndOfLine:(BOOL*)arg6 leadingEdge:(BOOL*)arg7 ;
+(id)closestColumnInColumnsArray:(id)arg1 forPoint:(CGPoint)arg2 ignoreEmptyColumns:(BOOL)arg3 ignoreDrawableOnlyColumns:(BOOL)arg4 ;
+(CGRect)caretRectForInsertionPoint:(id)arg1 withColumns:(id)arg2 ;
+(CGRect)rectForSelection:(id)arg1 withColumns:(id)arg2 ;
+(id)commentKnobBaseOriginForHighlightAtTextRange:(NSRange)arg1 withColumns:(id)arg2 ;
+(CGPoint)connectionLinePointForChangeRange:(NSRange)arg1 withColumns:(id)arg2 layoutTarget:(id)arg3 ;
+(unsigned long long)charIndexForPoint:(CGPoint)arg1 inColumnsArray:(id)arg2 allowPastBreak:(BOOL)arg3 allowNotFound:(BOOL)arg4 isAtEndOfLine:(BOOL*)arg5 leadingEdge:(BOOL*)arg6 ;
+(id)smartFieldWithAttributeKind:(int)arg1 inColumnArray:(id)arg2 atPoint:(CGPoint)arg3 ;
+(id)footnoteMarkAttachmentInColumnArray:(id)arg1 atPoint:(CGPoint)arg2 ;
+(id)footnoteReferenceAttachmentInColumnArray:(id)arg1 atPoint:(CGPoint)arg2 ;
+(id)pathForHighlightWithRange:(NSRange)arg1 columnArray:(id)arg2 pathStyle:(int)arg3 ;
+(NSRange)rangeOfColumns:(id)arg1 ;
+(CGSize)layoutSizeForParagraphEnumerator:(const TSWPParagraphEnumerator*)arg1 inColumns:(id)arg2 lineCount:(out unsigned long long*)arg3 nextLineOffset:(out double*)arg4 ;
-(id)rectsForSelection:(id)arg1 ;
-(BOOL)textIsVertical;
-(CGRect)typographicBoundsForCell;
-(CGRect)caretRectForSelection:(id)arg1 ;
-(SCD_Struct_TS707)lineMetricsAtCharIndex:(unsigned long long)arg1 allowEndOfLine:(BOOL)arg2 ;
-(unsigned long long)lineIndexForCharIndex:(unsigned long long)arg1 eol:(BOOL)arg2 ;
-(unsigned long long)countLines;
-(const TSWPLineFragment*)lineFragmentAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)charIndexFromPoint:(CGPoint)arg1 allowPastBreak:(BOOL)arg2 pastCenterGoesToNextChar:(BOOL)arg3 allowNotFound:(BOOL)arg4 isAtEndOfLine:(BOOL*)arg5 leadingEdge:(BOOL*)arg6 ;
-(id)smartFieldAtCharIndex:(unsigned long long)arg1 attributeKind:(int)arg2 ;
-(id)rectsForSelectionRange:(NSRange)arg1 selectionType:(int)arg2 forParagraphMode:(BOOL)arg3 includeRuby:(BOOL)arg4 ;
-(const shared_ptr<TSWPLineFragmentArray>*)lineFragmentArray;
-(double)nextLinePosition;
-(unsigned long long)startCharIndex;
-(void)setStartCharIndex:(unsigned long long)arg1 ;
-(unsigned long long)storageChangeCount;
-(NSRange)anchoredRange;
-(unsigned long long)nextWidowPullsDownFromCharIndex;
-(void)setNextWidowPullsDownFromCharIndex:(unsigned long long)arg1 ;
-(void)setAnchoredRange:(NSRange)arg1 ;
-(void)setStorageChangeCount:(unsigned long long)arg1 ;
-(void)setContentBottom:(double)arg1 ;
-(void)clearAdornments;
-(double)logicalBoundsTop;
-(double)textBottom;
-(CGRect)wpBounds;
-(CGRect)boundsOfLineFragmentAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)pRemapCharIndex:(unsigned long long)arg1 outIsAfterBreak:(out BOOL*)arg2 outWithTextSource:(out id*)arg3 ;
-(void)pInfoForCharIndex:(unsigned long long)arg1 isAtStart:(out BOOL*)arg2 isAtEnd:(out BOOL*)arg3 ;
-(CGAffineTransform)transformFromWP;
-(id)pMutableRectsForSelectionRange:(NSRange)arg1 selectionType:(int)arg2 includeSpaceAfter:(BOOL)arg3 includeSpaceBefore:(BOOL)arg4 includeLeading:(BOOL)arg5 forParagraphMode:(BOOL)arg6 includeRuby:(BOOL)arg7 inranges:(id)arg8 outranges:(id*)arg9 ;
-(id)rectsForSelectionRange:(NSRange)arg1 selectionType:(int)arg2 ;
-(const TSWPLineFragment*)pColumnEndingPartitionedLineFragmentInSelectionRange:(NSRange)arg1 ;
-(id)rectsForSelectionRange:(NSRange)arg1 selectionType:(int)arg2 forParagraphMode:(BOOL)arg3 ;
-(unsigned long long)charIndexFromPoint:(CGPoint)arg1 allowPastBreak:(BOOL)arg2 pastCenterGoesToNextChar:(BOOL)arg3 allowNotFound:(BOOL)arg4 isAtEndOfLine:(BOOL*)arg5 outFragment:(const TSWPLineFragment*)arg6 leadingEdge:(BOOL*)arg7 ;
-(CGAffineTransform)transformToWP;
-(unsigned long long)charIndexFromWPPoint:(CGPoint)arg1 pastCenterGoesToNextChar:(BOOL)arg2 allowNotFound:(BOOL)arg3 outFragment:(const TSWPLineFragment*)arg4 leadingEdge:(BOOL*)arg5 ;
-(CGRect)erasableBounds:(unsigned)arg1 ;
-(void)trimToCharIndex:(unsigned long long)arg1 inTarget:(id)arg2 removeFootnoteReferenceCount:(unsigned long long)arg3 removeAutoNumberFootnoteCount:(unsigned long long)arg4 ;
-(unsigned long long)startAnchoredCharIndex;
-(id)initWithStorage:(id)arg1 frameBounds:(CGRect)arg2 ;
-(double)logicalBoundsBottom;
-(unsigned long long)anchoredCharCount;
-(void)incrementRanges:(long long)arg1 startingAt:(unsigned long long)arg2 ;
-(double)minimumHeightForLayoutOnPage;
-(BOOL)requiresGlyphVectorsForHeightMeasurement;
-(CGRect)changeBarRectForLineFragment:(const TSWPLineFragment*)arg1 layoutTarget:(id)arg2 ;
-(void)addAdornmentRect:(const TSWPAdornmentRect*)arg1 ;
-(const shared_ptr<TSWPLineFragmentArray>*)lineFragmentArrayForUnitTests;
-(void)setLineFragmentArray:(const shared_ptr<TSWPLineFragmentArray>*)arg1 ;
-(void)offsetLineFragmentsByPoint:(CGPoint)arg1 ;
-(unsigned long long)lineFragmentCountForBaseline:(double)arg1 ;
-(void)makeEmpty:(unsigned long long)arg1 anchoredRange:(NSRange)arg2 layoutResultFlags:(int)arg3 ;
-(NSRange)rangeOfLineFragmentAtIndex:(unsigned long long)arg1 ;
-(double)horizontalOffsetForCharIndex:(unsigned long long)arg1 lineFragmentIndex:(unsigned long long)arg2 bumpPastHyphen:(BOOL)arg3 allowPastLineBounds:(BOOL)arg4 ;
-(const TSWPLineFragment*)nearestLineFragmentWithSameVerticalPositionAs:(unsigned long long)arg1 xPos:(double)arg2 ;
-(CGRect)glyphRectForRange:(NSRange)arg1 includingLabel:(BOOL)arg2 ;
-(unsigned)fontTraitsForRange:(NSRange)arg1 includingLabel:(BOOL)arg2 ;
-(CGRect)glyphRectForRubyFieldAtCharIndex:(unsigned long long)arg1 glyphRange:(NSRange)arg2 ;
-(unsigned long long)glyphCountForRubyFieldAtCharIndex:(unsigned long long)arg1 ;
-(CGRect)columnRectForRange:(NSRange)arg1 ;
-(id)lineSelectionsForSelection:(id)arg1 ;
-(CGRect)firstRectForSelection:(id)arg1 includeSpaceAfter:(BOOL)arg2 includeSpaceBefore:(BOOL)arg3 includeLeading:(BOOL)arg4 ;
-(id)rectsForSelectionRange:(NSRange)arg1 ;
-(id)rectsForSelectionRanges:(id)arg1 selectionType:(int)arg2 ;
-(id)rectsForSelection:(id)arg1 ranges:(id*)arg2 ;
-(CGRect)erasableRectForSelectionRange:(NSRange)arg1 ;
-(id)drawableIntersectionRectsForSelection:(id)arg1 inTarget:(id)arg2 ;
-(unsigned long long)charIndexForSelectionFromPoint:(CGPoint)arg1 isTail:(BOOL)arg2 ;
-(TSWPCharIndexAndPosition)calcAttachmentPositionForDrawable:(id)arg1 atPoint:(CGPoint)arg2 inTextLayoutTarget:(id)arg3 tlBoundsInfluencingWrap:(CGPoint)arg4 wrapOutset:(CGSize)arg5 wrapMargin:(double)arg6 makeInline:(BOOL)arg7 ;
-(void)renderWithRenderer:(id)arg1 currentSelection:(id)arg2 limitSelection:(id)arg3 listRange:(NSRange)arg4 rubyGlyphRange:(NSRange)arg5 isCanvasInteractive:(BOOL)arg6 suppressedMisspellingRange:(NSRange)arg7 blackAndWhite:(BOOL)arg8 dictationInterpretations:(const TSWPRangeVector*)arg9 autocorrections:(const TSWPRangeVector*)arg10 markedRange:(NSRange)arg11 markedText:(id)arg12 renderMode:(int)arg13 pageCount:(unsigned long long)arg14 suppressInvisibles:(BOOL)arg15 suppressFontSmoothing:(BOOL)arg16 currentCanvasSelection:(id)arg17 ;
-(id)partitionedLayoutForInfo:(id)arg1 ;
-(id)singleLinePartitionedInfoAtStart:(BOOL)arg1 ;
-(BOOL)onlyHasAnchoredDrawable;
-(BOOL)onlyHasPartitionedAttachments;
-(BOOL)isLastLineFragmentPartitioned;
-(BOOL)hasPartitionedAttachmentAtStart:(BOOL)arg1 ;
-(void)setWpBounds:(CGRect)arg1 ;
-(void)setTransformFromWP:(CGAffineTransform)arg1 ;
-(double)contentBottom;
-(void)setNextLinePosition:(double)arg1 ;
-(double)erasableContentBottom;
-(void)setErasableContentBottom:(double)arg1 ;
-(int)layoutResultFlags;
-(void)setLayoutResultFlags:(int)arg1 ;
-(unsigned long long)scaleTextPercent;
-(void)setScaleTextPercent:(unsigned long long)arg1 ;
-(void)setTextIsVertical:(BOOL)arg1 ;
-(TSWPStorage *)storage;
-(void)dealloc;
-(CGSize)maxSize;
-(NSRange)range;
-(double)textHeight;
-(unsigned long long)pageNumber;
-(void)setRange:(NSRange)arg1 ;
-(void)setPageNumber:(unsigned long long)arg1 ;
-(CGRect)frameBounds;
-(id<TSWPStyleProvider>)styleProvider;
-(void)setStyleProvider:(id<TSWPStyleProvider>)arg1 ;
-(void)setColumnIndex:(unsigned long long)arg1 ;
-(unsigned long long)columnIndex;
-(unsigned long long)characterCount;
-(void)setCharacterCount:(unsigned long long)arg1 ;
@end

