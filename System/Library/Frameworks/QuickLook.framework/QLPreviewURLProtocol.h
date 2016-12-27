/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/NSURLProtocol.h>

@interface QLPreviewURLProtocol : NSURLProtocol
+(void)initialize;
+(void)registerPreview:(id)arg1 ;
+(void)appendData:(id)arg1 forURL:(id)arg2 lastChunk:(BOOL)arg3 ;
+(id)_errorForAbort;
+(void)_unregisterURL:(id)arg1 ;
+(id)_errorForCancel;
+(void)startLoadingProtocol:(id)arg1 ;
+(void)stopLoadingProtocol:(id)arg1 ;
+(id)newUniqueURLWithName:(id)arg1 ;
+(id)newURLWithContentID:(id)arg1 baseURL:(id)arg2 ;
+(void)registerURL:(id)arg1 mimeType:(id)arg2 textEncoding:(id)arg3 ;
+(id)_errorForNoPreview;
+(void)unregisterURLs:(id)arg1 andPreview:(id)arg2 ;
+(void)setError:(id)arg1 forURL:(id)arg2 ;
+(id)errorForURL:(id)arg1 ;
+(id)mimeTypeForAttachmentURL:(id)arg1 ;
+(BOOL)canInitWithRequest:(id)arg1 ;
+(id)canonicalRequestForRequest:(id)arg1 ;
-(void)stopLoading;
-(void)startLoading;
@end

