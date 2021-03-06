/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:08 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MIME/MFMessageBody.h>

@class MFMimePart;

@interface MFMimeBody : MFMessageBody {

	MFMimePart* _topLevelPart;
	unsigned _preferredAlternative : 16;
	unsigned _numAlternatives : 16;

}
+(id)copyNewMimeBoundary;
+(id)versionString;
-(id)init;
-(void)dealloc;
-(id)mimeType;
-(id)attachments;
-(BOOL)isRich;
-(long long)preferredAlternative;
-(id)firstPartPassingTest:(/*^block*/id)arg1 ;
-(BOOL)isHTML;
-(id)textHtmlPart;
-(id)topLevelPart;
-(id)mimeSubtype;
-(unsigned long long)totalTextSize;
-(id)contentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 asHTML:(BOOL)arg3 isComplete:(BOOL*)arg4 ;
-(id)attachmentURLs;
-(id)partWithNumber:(id)arg1 ;
-(long long)numberOfAlternatives;
-(void)setPreferredAlternative:(long long)arg1 ;
-(unsigned)numberOfAttachmentsSigned:(BOOL*)arg1 encrypted:(BOOL*)arg2 ;
-(id)preferredBodyPart;
-(void)setTopLevelPart:(id)arg1 ;
@end

