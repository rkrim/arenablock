//
//  PiecePickerViewController.h
//  ArenaBlock
//
//  Created by Clement Yerochewski on 18/05/13.
//  Copyright (c) 2013 beMyApp. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PiecePickerViewController : UIViewController

@property (nonatomic, weak) IBOutlet UIImageView *pieceImg_1;
@property (nonatomic, weak) IBOutlet UIImageView *pieceImg_2;
@property (nonatomic, weak) IBOutlet UIImageView *pieceImg_3;
@property (nonatomic, strong) NSMutableArray *arrayOfPieces;

@end
