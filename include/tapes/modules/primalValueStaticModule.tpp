/*
 * CoDiPack, a Code Differentiation Package
 *
 * Copyright (C) 2015 Chair for Scientific Computing (SciComp), TU Kaiserslautern
 * Homepage: http://www.scicomp.uni-kl.de
 * Contact:  Prof. Nicolas R. Gauger (codi@scicomp.uni-kl.de)
 *
 * Lead developers: Max Sagebaum, Tim Albring (SciComp, TU Kaiserslautern)
 *
 * This file is part of CoDiPack (http://www.scicomp.uni-kl.de/software/codi).
 *
 * CoDiPack is free software: you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation, either version 2 of the
 * License, or (at your option) any later version.
 *
 * CoDiPack is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty
 * of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * See the GNU General Public License for more details.
 * You should have received a copy of the GNU
 * General Public License along with CoDiPack.
 * If not, see <http://www.gnu.org/licenses/>.
 *
 * Authors: Max Sagebaum, Tim Albring, (SciComp, TU Kaiserslautern)
 */

/*
 * In order to include this file the user has to define the preprocessor macro TAPE_NAME.
 *
 * TAPE_NAME defines the name of the including tape.
 *
 * The module defines the static structures for the primal value module, they are:
 *   InputHandle, CopyHandle, PreaccHandles.
 */

#ifndef TAPE_NAME
  #error Please define the name of the tape.
#endif

  template <typename TapeTypes>
  const ExpressionHandle<typename TapeTypes::RealType*, typename TapeTypes::RealType, typename TapeTypes::IndexType> TAPE_NAME<TapeTypes>::InputHandle(&TAPE_NAME<TapeTypes>::inputHandleFunc, 0, 0);
  template <typename TapeTypes>
  const ExpressionHandle<typename TapeTypes::RealType*, typename TapeTypes::RealType, typename TapeTypes::IndexType> TAPE_NAME<TapeTypes>::CopyHandle(&TAPE_NAME<TapeTypes>::copyHandleFunc, 1, 0);

#define CREATE_PREACC_HANDLE(size) ExpressionHandle<typename TapeTypes::RealType*, typename TapeTypes::RealType, typename TapeTypes::IndexType>(&TAPE_NAME<TapeTypes>::preaccHandleFunc<size>, size, size)

  template <typename TapeTypes>
  const ExpressionHandle<typename TapeTypes::RealType*, typename TapeTypes::RealType, typename TapeTypes::IndexType> TAPE_NAME<TapeTypes>::PreaccHandles[MaxStatementIntSize] = {
    CREATE_PREACC_HANDLE(0),
    CREATE_PREACC_HANDLE(1),
    CREATE_PREACC_HANDLE(2),
    CREATE_PREACC_HANDLE(3),
    CREATE_PREACC_HANDLE(4),
    CREATE_PREACC_HANDLE(5),
    CREATE_PREACC_HANDLE(6),
    CREATE_PREACC_HANDLE(7),
    CREATE_PREACC_HANDLE(8),
    CREATE_PREACC_HANDLE(9),
    CREATE_PREACC_HANDLE(10),
    CREATE_PREACC_HANDLE(11),
    CREATE_PREACC_HANDLE(12),
    CREATE_PREACC_HANDLE(13),
    CREATE_PREACC_HANDLE(14),
    CREATE_PREACC_HANDLE(15),
    CREATE_PREACC_HANDLE(16),
    CREATE_PREACC_HANDLE(17),
    CREATE_PREACC_HANDLE(18),
    CREATE_PREACC_HANDLE(19),
    CREATE_PREACC_HANDLE(20),
    CREATE_PREACC_HANDLE(21),
    CREATE_PREACC_HANDLE(22),
    CREATE_PREACC_HANDLE(23),
    CREATE_PREACC_HANDLE(24),
    CREATE_PREACC_HANDLE(25),
    CREATE_PREACC_HANDLE(26),
    CREATE_PREACC_HANDLE(27),
    CREATE_PREACC_HANDLE(28),
    CREATE_PREACC_HANDLE(29),
    CREATE_PREACC_HANDLE(30),
    CREATE_PREACC_HANDLE(31),
    CREATE_PREACC_HANDLE(32),
    CREATE_PREACC_HANDLE(33),
    CREATE_PREACC_HANDLE(34),
    CREATE_PREACC_HANDLE(35),
    CREATE_PREACC_HANDLE(36),
    CREATE_PREACC_HANDLE(37),
    CREATE_PREACC_HANDLE(38),
    CREATE_PREACC_HANDLE(39),
    CREATE_PREACC_HANDLE(40),
    CREATE_PREACC_HANDLE(41),
    CREATE_PREACC_HANDLE(42),
    CREATE_PREACC_HANDLE(43),
    CREATE_PREACC_HANDLE(44),
    CREATE_PREACC_HANDLE(45),
    CREATE_PREACC_HANDLE(46),
    CREATE_PREACC_HANDLE(47),
    CREATE_PREACC_HANDLE(48),
    CREATE_PREACC_HANDLE(49),
    CREATE_PREACC_HANDLE(50),
    CREATE_PREACC_HANDLE(51),
    CREATE_PREACC_HANDLE(52),
    CREATE_PREACC_HANDLE(53),
    CREATE_PREACC_HANDLE(54),
    CREATE_PREACC_HANDLE(55),
    CREATE_PREACC_HANDLE(56),
    CREATE_PREACC_HANDLE(57),
    CREATE_PREACC_HANDLE(58),
    CREATE_PREACC_HANDLE(59),
    CREATE_PREACC_HANDLE(60),
    CREATE_PREACC_HANDLE(61),
    CREATE_PREACC_HANDLE(62),
    CREATE_PREACC_HANDLE(63),
    CREATE_PREACC_HANDLE(64),
    CREATE_PREACC_HANDLE(65),
    CREATE_PREACC_HANDLE(66),
    CREATE_PREACC_HANDLE(67),
    CREATE_PREACC_HANDLE(68),
    CREATE_PREACC_HANDLE(69),
    CREATE_PREACC_HANDLE(70),
    CREATE_PREACC_HANDLE(71),
    CREATE_PREACC_HANDLE(72),
    CREATE_PREACC_HANDLE(73),
    CREATE_PREACC_HANDLE(74),
    CREATE_PREACC_HANDLE(75),
    CREATE_PREACC_HANDLE(76),
    CREATE_PREACC_HANDLE(77),
    CREATE_PREACC_HANDLE(78),
    CREATE_PREACC_HANDLE(79),
    CREATE_PREACC_HANDLE(80),
    CREATE_PREACC_HANDLE(81),
    CREATE_PREACC_HANDLE(82),
    CREATE_PREACC_HANDLE(83),
    CREATE_PREACC_HANDLE(84),
    CREATE_PREACC_HANDLE(85),
    CREATE_PREACC_HANDLE(86),
    CREATE_PREACC_HANDLE(87),
    CREATE_PREACC_HANDLE(88),
    CREATE_PREACC_HANDLE(89),
    CREATE_PREACC_HANDLE(90),
    CREATE_PREACC_HANDLE(91),
    CREATE_PREACC_HANDLE(92),
    CREATE_PREACC_HANDLE(93),
    CREATE_PREACC_HANDLE(94),
    CREATE_PREACC_HANDLE(95),
    CREATE_PREACC_HANDLE(96),
    CREATE_PREACC_HANDLE(97),
    CREATE_PREACC_HANDLE(98),
    CREATE_PREACC_HANDLE(99),
    CREATE_PREACC_HANDLE(100),
    CREATE_PREACC_HANDLE(101),
    CREATE_PREACC_HANDLE(102),
    CREATE_PREACC_HANDLE(103),
    CREATE_PREACC_HANDLE(104),
    CREATE_PREACC_HANDLE(105),
    CREATE_PREACC_HANDLE(106),
    CREATE_PREACC_HANDLE(107),
    CREATE_PREACC_HANDLE(108),
    CREATE_PREACC_HANDLE(109),
    CREATE_PREACC_HANDLE(110),
    CREATE_PREACC_HANDLE(111),
    CREATE_PREACC_HANDLE(112),
    CREATE_PREACC_HANDLE(113),
    CREATE_PREACC_HANDLE(114),
    CREATE_PREACC_HANDLE(115),
    CREATE_PREACC_HANDLE(116),
    CREATE_PREACC_HANDLE(117),
    CREATE_PREACC_HANDLE(118),
    CREATE_PREACC_HANDLE(119),
    CREATE_PREACC_HANDLE(120),
    CREATE_PREACC_HANDLE(121),
    CREATE_PREACC_HANDLE(122),
    CREATE_PREACC_HANDLE(123),
    CREATE_PREACC_HANDLE(124),
    CREATE_PREACC_HANDLE(125),
    CREATE_PREACC_HANDLE(126),
    CREATE_PREACC_HANDLE(127),
    CREATE_PREACC_HANDLE(128),
    CREATE_PREACC_HANDLE(129),
    CREATE_PREACC_HANDLE(130),
    CREATE_PREACC_HANDLE(131),
    CREATE_PREACC_HANDLE(132),
    CREATE_PREACC_HANDLE(133),
    CREATE_PREACC_HANDLE(134),
    CREATE_PREACC_HANDLE(135),
    CREATE_PREACC_HANDLE(136),
    CREATE_PREACC_HANDLE(137),
    CREATE_PREACC_HANDLE(138),
    CREATE_PREACC_HANDLE(139),
    CREATE_PREACC_HANDLE(140),
    CREATE_PREACC_HANDLE(141),
    CREATE_PREACC_HANDLE(142),
    CREATE_PREACC_HANDLE(143),
    CREATE_PREACC_HANDLE(144),
    CREATE_PREACC_HANDLE(145),
    CREATE_PREACC_HANDLE(146),
    CREATE_PREACC_HANDLE(147),
    CREATE_PREACC_HANDLE(148),
    CREATE_PREACC_HANDLE(149),
    CREATE_PREACC_HANDLE(150),
    CREATE_PREACC_HANDLE(151),
    CREATE_PREACC_HANDLE(152),
    CREATE_PREACC_HANDLE(153),
    CREATE_PREACC_HANDLE(154),
    CREATE_PREACC_HANDLE(155),
    CREATE_PREACC_HANDLE(156),
    CREATE_PREACC_HANDLE(157),
    CREATE_PREACC_HANDLE(158),
    CREATE_PREACC_HANDLE(159),
    CREATE_PREACC_HANDLE(160),
    CREATE_PREACC_HANDLE(161),
    CREATE_PREACC_HANDLE(162),
    CREATE_PREACC_HANDLE(163),
    CREATE_PREACC_HANDLE(164),
    CREATE_PREACC_HANDLE(165),
    CREATE_PREACC_HANDLE(166),
    CREATE_PREACC_HANDLE(167),
    CREATE_PREACC_HANDLE(168),
    CREATE_PREACC_HANDLE(169),
    CREATE_PREACC_HANDLE(170),
    CREATE_PREACC_HANDLE(171),
    CREATE_PREACC_HANDLE(172),
    CREATE_PREACC_HANDLE(173),
    CREATE_PREACC_HANDLE(174),
    CREATE_PREACC_HANDLE(175),
    CREATE_PREACC_HANDLE(176),
    CREATE_PREACC_HANDLE(177),
    CREATE_PREACC_HANDLE(178),
    CREATE_PREACC_HANDLE(179),
    CREATE_PREACC_HANDLE(180),
    CREATE_PREACC_HANDLE(181),
    CREATE_PREACC_HANDLE(182),
    CREATE_PREACC_HANDLE(183),
    CREATE_PREACC_HANDLE(184),
    CREATE_PREACC_HANDLE(185),
    CREATE_PREACC_HANDLE(186),
    CREATE_PREACC_HANDLE(187),
    CREATE_PREACC_HANDLE(188),
    CREATE_PREACC_HANDLE(189),
    CREATE_PREACC_HANDLE(190),
    CREATE_PREACC_HANDLE(191),
    CREATE_PREACC_HANDLE(192),
    CREATE_PREACC_HANDLE(193),
    CREATE_PREACC_HANDLE(194),
    CREATE_PREACC_HANDLE(195),
    CREATE_PREACC_HANDLE(196),
    CREATE_PREACC_HANDLE(197),
    CREATE_PREACC_HANDLE(198),
    CREATE_PREACC_HANDLE(199),
    CREATE_PREACC_HANDLE(200),
    CREATE_PREACC_HANDLE(201),
    CREATE_PREACC_HANDLE(202),
    CREATE_PREACC_HANDLE(203),
    CREATE_PREACC_HANDLE(204),
    CREATE_PREACC_HANDLE(205),
    CREATE_PREACC_HANDLE(206),
    CREATE_PREACC_HANDLE(207),
    CREATE_PREACC_HANDLE(208),
    CREATE_PREACC_HANDLE(209),
    CREATE_PREACC_HANDLE(210),
    CREATE_PREACC_HANDLE(211),
    CREATE_PREACC_HANDLE(212),
    CREATE_PREACC_HANDLE(213),
    CREATE_PREACC_HANDLE(214),
    CREATE_PREACC_HANDLE(215),
    CREATE_PREACC_HANDLE(216),
    CREATE_PREACC_HANDLE(217),
    CREATE_PREACC_HANDLE(218),
    CREATE_PREACC_HANDLE(219),
    CREATE_PREACC_HANDLE(220),
    CREATE_PREACC_HANDLE(221),
    CREATE_PREACC_HANDLE(222),
    CREATE_PREACC_HANDLE(223),
    CREATE_PREACC_HANDLE(224),
    CREATE_PREACC_HANDLE(225),
    CREATE_PREACC_HANDLE(226),
    CREATE_PREACC_HANDLE(227),
    CREATE_PREACC_HANDLE(228),
    CREATE_PREACC_HANDLE(229),
    CREATE_PREACC_HANDLE(230),
    CREATE_PREACC_HANDLE(231),
    CREATE_PREACC_HANDLE(232),
    CREATE_PREACC_HANDLE(233),
    CREATE_PREACC_HANDLE(234),
    CREATE_PREACC_HANDLE(235),
    CREATE_PREACC_HANDLE(236),
    CREATE_PREACC_HANDLE(237),
    CREATE_PREACC_HANDLE(238),
    CREATE_PREACC_HANDLE(239),
    CREATE_PREACC_HANDLE(240),
    CREATE_PREACC_HANDLE(241),
    CREATE_PREACC_HANDLE(242),
    CREATE_PREACC_HANDLE(243),
    CREATE_PREACC_HANDLE(244),
    CREATE_PREACC_HANDLE(245),
    CREATE_PREACC_HANDLE(246),
    CREATE_PREACC_HANDLE(247),
    CREATE_PREACC_HANDLE(248),
    CREATE_PREACC_HANDLE(249),
    CREATE_PREACC_HANDLE(250),
    CREATE_PREACC_HANDLE(251),
    CREATE_PREACC_HANDLE(252),
    CREATE_PREACC_HANDLE(253),
    CREATE_PREACC_HANDLE(254),
    CREATE_PREACC_HANDLE(255)
  };

#undef CREATE_PREACC_HANDLE
