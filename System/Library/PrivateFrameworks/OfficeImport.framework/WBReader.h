/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:20 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OCBReader.h>

@class NSMutableArray, OITSUNoCopyDictionary, WDDocument, WBOfficeArtReaderState, NSMutableDictionary;

@interface WBReader : OCBReader {

	WrdNoteTable* mFootnoteTable;
	WrdNoteTable* mEndnoteTable;
	WrdAnnotationTable* mAnnotationTable;
	WrdCPTableHeaders* mTableHeaders;
	WrdBookmarkTable* mBookmarkTable;
	WrdBookmarkTable* mAnnotationBookmarkTable;
	WrdFieldPositionTable* mFieldPositionTables[8];
	WrdStoryTable* mStoryTable;
	WrdStoryTable* mHeaderStoryTable;
	WrdFileShapeAddressTable* mFileShapeAddressTable;
	WrdFileShapeAddressTable* mFileShapeAddressHeaderTable;
	WrdEshObjectFactory* mEshObjectFactory;
	WrdParagraphProperties* mLastRowParagraphProperties;
	NSMutableArray* mAnnotationOwners;
	OITSUNoCopyDictionary* mIndexToStyles;
	OITSUNoCopyDictionary* mIndexToFonts;
	WDDocument* mTargetDocument;
	WBOfficeArtReaderState* mOfficeArtState;
	vector<WBTextBoxReaderInfo, std::__1::allocator<WBTextBoxReaderInfo> >* mTextBoxes;
	BOOL mReportProgress;
	id mAnnotationRangeStart;
	NSMutableDictionary* mBookmarkIndexToAnnotationRangeStartMap;

}

@property (assign,nonatomic) WDDocument * targetDocument; 
-(void)dealloc;
-(void)initialize;
-(BOOL)start;
-(id)fontAtIndex:(int)arg1 ;
-(id)initWithCancelDelegate:(id)arg1 tracing:(id)arg2 ;
-(id)read;
-(id)drawableForShapeId:(unsigned)arg1 ;
-(WrdEshObjectFactory*)eshObjectFactory;
-(id)officeArtState;
-(OCCBinaryStreamer*)allocBinaryStreamerWithCryptoKey:(OCCCryptoKeyRef)arg1 baseOutputFilenameInUTF8:(const char*)arg2 ;
-(OCCEncryptionInfoReader*)encryptionInfoReader;
-(void)setOfficeArtState:(id)arg1 ;
-(WrdAnnotationTable*)annotationTable;
-(WrdBinaryReader*)wrdReader;
-(id)annotationOwner:(int)arg1 ;
-(WrdBookmarkTable*)annotationBookmarkTable;
-(void)setAnnotationRangeStart:(id)arg1 ;
-(id)readCharactersFrom:(unsigned)arg1 to:(unsigned)arg2 textType:(int)arg3 ;
-(WrdBookmarkTable*)bookmarkTable;
-(id)readCharactersForTextRun:(WrdTextRun*)arg1 ;
-(WrdNoteTable*)footnoteTable;
-(WrdNoteTable*)endnoteTable;
-(id)annotationRangeStart;
-(WrdFieldPositionTable*)fieldPositionTableForTextType:(int)arg1 ;
-(void)setAnnotationRangeStart:(id)arg1 forBookmarkIndex:(unsigned long long)arg2 ;
-(id)annotationRangeStartForBookmarkIndex:(unsigned long long)arg1 ;
-(id)styleAtIndex:(int)arg1 ;
-(WrdCPTableHeaders*)tableHeaders;
-(WrdStoryTable*)storyTable;
-(WrdStoryTable*)headerStoryTable;
-(WrdFileShapeAddressTable*)fileShapeAddressTable;
-(WrdFileShapeAddressTable*)fileShapeAddressHeaderTable;
-(WrdParagraphProperties*)lastRowParagraphProperties;
-(void)setLastRowParagraphProperties:(WrdParagraphProperties*)arg1 ;
-(id)styleAtIndex:(int)arg1 expectedType:(int)arg2 ;
-(void)addStyle:(id)arg1 index:(int)arg2 ;
-(void)addFont:(id)arg1 index:(int)arg2 ;
-(BOOL)reportProgress;
-(void)setReportProgress:(BOOL)arg1 ;
-(void)cacheTextBox:(id)arg1 withChainIndex:(unsigned short)arg2 ;
-(unsigned long long)textBoxCount;
-(WBTextBoxReaderInfo)textBoxInfoAtIndex:(unsigned long long)arg1 ;
-(WDDocument *)targetDocument;
-(void)setTargetDocument:(WDDocument *)arg1 ;
@end

