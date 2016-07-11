//
//  XTFile.m
//  XTFoundationDemo
//
//  Created by lza on 16/7/1.
//  Copyright © 2016年 lza. All rights reserved.
//

#import "TWUploadFile.h"

@implementation TWUploadFile

- (NSString *)fileTypeString {
    NSString *fileType = @"image/png";
    switch (self.fileType) {
        case XTFileTypeMP4:
            fileType = @"video/mpeg4";
            break;
        case XTFileTypePNG:
            fileType = @"image/png";
            break;
        case XTFileTypeJPG:
            fileType = @"image/jpg";
            break;
        case XTFileTypeGIF:
            fileType = @"image/gif";
            break;
        case XTFileTypeJPEG:
            fileType = @"image/jpeg";
            break;
        case XTFileTypeOther:
            fileType = @"file/other";
            break;
    }
    return fileType;
}


@end
