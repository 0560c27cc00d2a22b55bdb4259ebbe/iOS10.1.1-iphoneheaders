/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:22 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MFMessageLoadingContext, NSArray, NSError, MFMimePart, MFMimeBody;

@interface MFMessageLoadingContextEvent : NSObject {

	BOOL _hasLoadedCompleteBody;
	BOOL _hasLoadedBestAlternativePart;
	MFMessageLoadingContext* _context;
	NSArray* _content;
	unsigned long long _remainingBytes;
	NSError* _error;
	MFMimePart* _loadedPart;
	MFMimeBody* _loadedBody;

}

@property (assign,nonatomic,__weak) MFMessageLoadingContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) NSArray * content;                                       //@synthesize content=_content - In the implementation block
@property (assign,nonatomic) BOOL hasLoadedCompleteBody;                            //@synthesize hasLoadedCompleteBody=_hasLoadedCompleteBody - In the implementation block
@property (assign,nonatomic) BOOL hasLoadedBestAlternativePart;                     //@synthesize hasLoadedBestAlternativePart=_hasLoadedBestAlternativePart - In the implementation block
@property (assign,nonatomic) unsigned long long remainingBytes;                     //@synthesize remainingBytes=_remainingBytes - In the implementation block
@property (nonatomic,retain) NSError * error;                                       //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSError * smimeError; 
@property (nonatomic,retain) MFMimePart * loadedPart;                               //@synthesize loadedPart=_loadedPart - In the implementation block
@property (nonatomic,retain) MFMimeBody * loadedBody;                               //@synthesize loadedBody=_loadedBody - In the implementation block
-(void)dealloc;
-(NSArray *)content;
-(MFMessageLoadingContext *)context;
-(void)setContext:(MFMessageLoadingContext *)arg1 ;
-(void)setContent:(NSArray *)arg1 ;
-(BOOL)hasLoadedBestAlternativePart;
-(MFMimePart *)loadedPart;
-(MFMimeBody *)loadedBody;
-(NSError *)smimeError;
-(BOOL)hasLoadedCompleteBody;
-(void)setHasLoadedCompleteBody:(BOOL)arg1 ;
-(void)setHasLoadedBestAlternativePart:(BOOL)arg1 ;
-(unsigned long long)remainingBytes;
-(void)setRemainingBytes:(unsigned long long)arg1 ;
-(void)setLoadedPart:(MFMimePart *)arg1 ;
-(void)setLoadedBody:(MFMimeBody *)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
@end

