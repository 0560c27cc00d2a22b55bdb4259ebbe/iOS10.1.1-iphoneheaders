/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:32 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/Message-Structs.h>
#import <libobjc.A.dylib/MFCancelable.h>

@protocol MFDataConsumer;
@class MFAttachmentManager, MFAttachmentPlaceholder, NSProgress, NSURL, MFMimePart, NSString, MFMailDropMetadata;

@interface MFAttachment : NSObject <MFCancelable> {

	MFAttachmentManager* _attachmentManager;
	BOOL _isDataAvailableLocally;
	MFAttachmentPlaceholder* _placeholder;
	NSProgress* _downloadProgress;
	BOOL _isAutoArchive;
	BOOL _wantsCompletionBlockOffMainThread;
	NSURL* _url;
	MFMimePart* _part;
	NSString* _disposition;
	/*^block*/id _fetchCompletionBlock;
	id<MFDataConsumer> _customConsumer;
	unsigned long long _lastProgressBytes;
	double _lastProgressTime;

}

@property (nonatomic,retain) NSString * eventID; 
@property (nonatomic,retain) NSString * meetingStorePersistentID; 
@property (nonatomic,retain) NSString * icsRepresentation; 
@property (assign,nonatomic) CGSize imageDimensions; 
@property (assign,nonatomic) MFAttachmentManager * attachmentManager;              //@synthesize attachmentManager=_attachmentManager - In the implementation block
@property (readonly) BOOL isContainedInRFC822; 
@property (readonly) BOOL isContainedInCompose; 
@property (copy) NSString * contentID; 
@property (nonatomic,retain) NSProgress * downloadProgress;                        //@synthesize downloadProgress=_downloadProgress - In the implementation block
@property (assign,nonatomic) unsigned long long lastProgressBytes;                 //@synthesize lastProgressBytes=_lastProgressBytes - In the implementation block
@property (assign,nonatomic) double lastProgressTime;                              //@synthesize lastProgressTime=_lastProgressTime - In the implementation block
@property (nonatomic,copy) NSURL * url;                                            //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) MFMimePart * part;                                    //@synthesize part=_part - In the implementation block
@property (nonatomic,copy) NSString * fileName; 
@property (readonly) NSString * path; 
@property (nonatomic,copy) NSString * mimeType; 
@property (nonatomic,copy) NSString * disposition;                                 //@synthesize disposition=_disposition - In the implementation block
@property (nonatomic,copy) NSString * remoteImageFileName; 
@property (assign,nonatomic) unsigned long long decodedFileSize; 
@property (assign,nonatomic) unsigned long long encodedFileSize; 
@property (readonly) BOOL isDataAvailableLocally; 
@property (readonly) BOOL shouldAutoDownload; 
@property (readonly) NSString * inferredMimeType; 
@property (readonly) NSString * fileUTType; 
@property (readonly) BOOL isAutoArchive;                                           //@synthesize isAutoArchive=_isAutoArchive - In the implementation block
@property (assign) BOOL isPlaceholder; 
@property (nonatomic,retain) MFAttachmentPlaceholder * placeholder;                //@synthesize placeholder=_placeholder - In the implementation block
@property (nonatomic,retain) MFMailDropMetadata * mailDropMetadata; 
@property (nonatomic,copy) id fetchCompletionBlock;                                //@synthesize fetchCompletionBlock=_fetchCompletionBlock - In the implementation block
@property (nonatomic,retain) id<MFDataConsumer> customConsumer;                    //@synthesize customConsumer=_customConsumer - In the implementation block
@property (assign,nonatomic) BOOL wantsCompletionBlockOffMainThread;               //@synthesize wantsCompletionBlockOffMainThread=_wantsCompletionBlockOffMainThread - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)passPlaceholder;
+(id)attachmentElementHTMLStringWithAttributes:(id)arg1 ;
-(BOOL)isPass;
-(id)passWithError:(id*)arg1 ;
-(id)pass;
-(id)className;
-(CGSize)imageDimensions;
-(void)setImageDimensions:(CGSize)arg1 ;
-(NSString *)meetingStorePersistentID;
-(BOOL)isDisplayableImage;
-(CGSize)markupSizeForImageScale:(unsigned long long)arg1 ;
-(BOOL)isDisplayableInline;
-(BOOL)isPDFFile;
-(unsigned long long)imageScalingFlags;
-(void)enqueueScaleAttachmentWithCompletionBlock:(/*^block*/id)arg1 ;
-(unsigned long long)scaledFileSize;
-(id)scaledImageToFit:(unsigned long long)arg1 saveScaledImage:(BOOL)arg2 attachmentContextID:(id)arg3 ;
-(BOOL)isCalendarFile;
-(void)setIcsRepresentation:(NSString *)arg1 ;
-(void)setEventID:(NSString *)arg1 ;
-(void)setMeetingStorePersistentID:(NSString *)arg1 ;
-(id)markupStringForCompositionWithPrependedBlankLine:(BOOL)arg1 imageScale:(unsigned long long)arg2 ;
-(unsigned long long)scaledFileSizeForScale:(unsigned long long)arg1 ;
-(id)filenameStrippingZipIfNeededUseApplications:(BOOL)arg1 ;
-(id)_contentTypeByStrippingZipIfNeeded:(BOOL)arg1 ;
-(BOOL)_isContentTypeDisplayableByMobileMail;
-(BOOL)isMedia;
-(CGSize)imageDimensionsWithData:(id)arg1 ;
-(double)constrainedWidth;
-(id)_imageScalingKeyForImageScale:(unsigned long long)arg1 ;
-(BOOL)needsColorspaceConversion;
-(void)_setImageScale:(unsigned long long)arg1 ;
-(unsigned long long)_imageScale;
-(BOOL)isDisplayableByWebKit;
-(BOOL)isRestrictedMIMEType;
-(BOOL)isContentOpenable;
-(BOOL)isDisplayableInlineWithData:(id)arg1 ;
-(BOOL)hasCalendarMetadata;
-(NSString *)icsRepresentation;
-(NSString *)eventID;
-(BOOL)isContentCompressed;
-(void)compressContentsWithCompletion:(/*^block*/id)arg1 ;
-(void)decompressContentsWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isRFC822;
-(BOOL)isDisplayableInsidePlugin;
-(id)markupStringForDisplayWithData:(id)arg1 displayStyle:(int)arg2 printableWidth:(double)arg3 allowAttachmentElement:(BOOL)arg4 ;
-(id)contentType;
-(void)cancel;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSURL *)url;
-(NSString *)path;
-(void)setUrl:(NSURL *)arg1 ;
-(NSString *)mimeType;
-(void)setPlaceholder:(MFAttachmentPlaceholder *)arg1 ;
-(MFAttachmentPlaceholder *)placeholder;
-(id)fileURL;
-(void)setMetadataValue:(id)arg1 forKey:(id)arg2 ;
-(NSString *)disposition;
-(void)setContentID:(NSString *)arg1 ;
-(BOOL)isImageFile;
-(void)setDisposition:(NSString *)arg1 ;
-(NSString *)contentID;
-(MFMailDropMetadata *)mailDropMetadata;
-(id)fetchPlaceholderData;
-(id)fetchDataSynchronously:(id*)arg1 stripPrivateMetadata:(BOOL)arg2 ;
-(MFAttachmentManager *)attachmentManager;
-(void)setAttachmentManager:(MFAttachmentManager *)arg1 ;
-(id)readFromDisk;
-(BOOL)isDataAvailableLocally;
-(unsigned long long)encodedFileSize;
-(void)fetchData;
-(id<MFDataConsumer>)customConsumer;
-(id)decodeFilterWithDataConsumer:(id)arg1 ;
-(void)writeToDiskWithData:(id)arg1 ;
-(unsigned long long)lastProgressBytes;
-(double)lastProgressTime;
-(void)setLastProgressBytes:(unsigned long long)arg1 ;
-(void)setLastProgressTime:(double)arg1 ;
-(void)updateProgressWithCurrentBytes:(unsigned long long)arg1 ;
-(BOOL)wantsCompletionBlockOffMainThread;
-(id)initWithURL:(id)arg1 attachmentManager:(id)arg2 ;
-(void)setDecodedFileSize:(unsigned long long)arg1 ;
-(id)fetchLocalData;
-(unsigned long long)decodedFileSize;
-(BOOL)isMailDrop;
-(BOOL)isContainedInRFC822;
-(id)fetchLocalData:(id*)arg1 stripPrivateMetadata:(BOOL)arg2 ;
-(BOOL)isContainedInCompose;
-(id)_dataProvider;
-(id)filterData:(id)arg1 ;
-(id)fetchDataSynchronously:(id*)arg1 ;
-(void)setMailDropMetadata:(MFMailDropMetadata *)arg1 ;
-(BOOL)contentTypeConformsToEventVCS;
-(id)filterVCSData:(id)arg1 ;
-(BOOL)isCached;
-(id)fileNameByStrippingZipIfNeeded:(BOOL)arg1 ;
-(id)_fileUTTypeForFileName:(id)arg1 ;
-(unsigned long long)sizeOnDisk;
-(id)textEncodingGuessWithData:(id)arg1 ;
-(NSString *)fileUTType;
-(BOOL)contentTypeConformsToEventICS;
-(BOOL)conformsToType:(id)arg1 ;
-(id)fetchDataToURL:(id*)arg1 ;
-(BOOL)isMailDropPhotoArchive;
-(id)filterICSData:(id)arg1 ;
-(BOOL)shouldAutoDownload;
-(NSString *)inferredMimeType;
-(NSString *)remoteImageFileName;
-(void)setRemoteImageFileName:(NSString *)arg1 ;
-(id)attachmentContentTypeForFileName:(id)arg1 ;
-(void)setEncodedFileSize:(unsigned long long)arg1 ;
-(id)textEncodingNameForData:(id)arg1 mimeType:(id)arg2 ;
-(BOOL)contentTypeConformsToVCard;
-(BOOL)contentTypeConformsToEvent;
-(BOOL)contentTypeConformsToProvisionment;
-(BOOL)contentTypeConformsToMarkup;
-(BOOL)contentTypeConformsToPassbook;
-(BOOL)contentTypeConformsToIWork;
-(BOOL)isAutoArchive;
-(void)setCustomConsumer:(id<MFDataConsumer>)arg1 ;
-(void)setWantsCompletionBlockOffMainThread:(BOOL)arg1 ;
-(NSProgress *)downloadProgress;
-(void)setDownloadProgress:(NSProgress *)arg1 ;
-(BOOL)isPlaceholder;
-(BOOL)isAvailable;
-(void)resetProgress;
-(void)setMimeType:(NSString *)arg1 ;
-(id)metadataValueForKey:(id)arg1 ;
-(NSString *)fileName;
-(void)setFileName:(NSString *)arg1 ;
-(void)setIsPlaceholder:(BOOL)arg1 ;
-(id)fileAttributes;
-(void)setPart:(MFMimePart *)arg1 ;
-(MFMimePart *)part;
-(void)setFetchCompletionBlock:(id)arg1 ;
-(id)fetchCompletionBlock;
@end

