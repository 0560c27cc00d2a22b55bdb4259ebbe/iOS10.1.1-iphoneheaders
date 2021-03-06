/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:38 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class LSDocumentProxy, NSString, NSURL;

@interface _SFQuickLookDocument : NSObject {

	LSDocumentProxy* _documentProxy;
	BOOL _needsQuickLookDocumentView;
	NSString* _savedPath;
	NSString* _savedPathWithProperExtension;
	BOOL _shouldDeleteSavedPath;
	BOOL _shouldDeleteSavedPathWithProperExtension;
	NSString* _fileName;
	NSString* _mimeType;
	NSString* _uti;
	NSURL* _sourceURL;

}

@property (nonatomic,retain) LSDocumentProxy * documentProxy;                                  //@synthesize documentProxy=_documentProxy - In the implementation block
@property (nonatomic,copy) NSString * savedPath;                                               //@synthesize savedPath=_savedPath - In the implementation block
@property (nonatomic,copy) NSString * savedPathWithProperExtension;                            //@synthesize savedPathWithProperExtension=_savedPathWithProperExtension - In the implementation block
@property (nonatomic,copy) NSString * fileName;                                                //@synthesize fileName=_fileName - In the implementation block
@property (nonatomic,copy) NSString * mimeType;                                                //@synthesize mimeType=_mimeType - In the implementation block
@property (nonatomic,copy) NSString * uti;                                                     //@synthesize uti=_uti - In the implementation block
@property (nonatomic,readonly) BOOL needsQuickLookDocumentView;                                //@synthesize needsQuickLookDocumentView=_needsQuickLookDocumentView - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedType; 
@property (nonatomic,retain) NSURL * sourceURL;                                                //@synthesize sourceURL=_sourceURL - In the implementation block
@property (nonatomic,readonly) BOOL shouldUnzipByUIDocumentInteractionController; 
-(void)dealloc;
-(NSString *)mimeType;
-(void)setDocumentProxy:(LSDocumentProxy *)arg1 ;
-(LSDocumentProxy *)documentProxy;
-(void)setSourceURL:(NSURL *)arg1 ;
-(NSURL *)sourceURL;
-(BOOL)shouldUnzipByUIDocumentInteractionController;
-(NSString *)localizedType;
-(NSString *)savedPath;
-(NSString *)savedPathWithProperExtension;
-(void)setUti:(NSString *)arg1 ;
-(void)_deleteSavedPathIfNecessary;
-(void)_deleteSavedPathWithProperExtensionIfNecessary;
-(void)setSavedPathWithProperExtension:(id)arg1 shouldDelete:(BOOL)arg2 ;
-(void)setSavedPath:(NSString *)arg1 ;
-(void)setSavedPathWithProperExtension:(NSString *)arg1 ;
-(id)initWithFileName:(id)arg1 mimeType:(id)arg2 uti:(id)arg3 needsQuickLookDocumentView:(BOOL)arg4 ;
-(void)setSavedPath:(id)arg1 shouldDelete:(BOOL)arg2 ;
-(void)addQuickLookPrintSettingsToPrintInfo:(id)arg1 ;
-(BOOL)needsQuickLookDocumentView;
-(void)setMimeType:(NSString *)arg1 ;
-(NSString *)uti;
-(NSString *)fileName;
-(void)setFileName:(NSString *)arg1 ;
@end

